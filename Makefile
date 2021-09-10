CC = g++
CFLAGS = -g -Wall
RM = rm

all: parking

parking: Ticket.o Vehicle.o Slot.o Floor.o Building.o ParkingManagement.o Main.o
	$(CC) $(CFLAGS) -o parking Ticket.o Vehicle.o Slot.o Floor.o Building.o ParkingManagement.o Main.o 

Main.o: Main.cpp ParkingManagement.o 
	$(CC) $(CFLAGS) -c Main.cpp

ParkingManagement.o: ParkingManagement.cpp ParkingManagement.h Building.o
	$(CC) $(CFLAGS) -c ParkingManagement.cpp

Building.o: Building.cpp Building.h Floor.o
	$(CC) $(CFLAGS) -c Building.cpp

Floor.o: Floor.cpp Floor.h Slot.o
	$(CC) $(CFLAGS) -c Floor.cpp

Slot.o: Slot.cpp Slot.h Vehicle.o
	$(CC) $(CFLAGS) -c Slot.cpp

Vehicle.o: Vehicle.cpp Vehicle.h Ticket.o Ticket.h
	$(CC) $(CFLAGS) -c Vehicle.cpp Ticket.h

Ticket.o: Ticket.cpp Ticket.h
	$(CC) $(CFLAGS) -c Ticket.cpp

