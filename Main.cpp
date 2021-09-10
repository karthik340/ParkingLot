#include "ParkingManagement.h"
#include<bits/stdc++.h>
using namespace std;

int main() {
    ParkingManagement p;
    p.init_building();
    p.park(1,"bmw","blue");
    p.park(2,"bmw","red");
    p.park(3,"bmw","green");
    p.park(4,"bmw","blue");
    p.un_park(4);
   p.get_vehicles_of_color("blue");
}