#include "Vehicle.h"
class Slot{
   private:
    Vehicle v;  
    int slot_id;
    int occupied;  
    public:
    void set_occupied(int i);
    int get_occupied();
    void set_vehicle(int regno,string brand,string color);
    int get_regno();
    string get_color();
    Vehicle get_vehicle();
};