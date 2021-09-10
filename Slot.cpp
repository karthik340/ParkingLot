#include "Vehicle.h"
#include<bits/stdc++.h>
using namespace std;
class Slot{
   private:
    Vehicle v;
    
    int slot_id;
    int occupied;  
    public:
    void set_occupied(int i)
    {
        occupied=i;
    }
    int get_occupied()
    {
        return occupied;
    }
    void set_vehicle(int regno,string brand,string color)
    {
        v.set_vehicle(regno,brand,color);
    }
    int get_regno()
    {
        return v.get_regno();
    }
    string get_color()
    {
        return v.get_color();
    }
    Vehicle get_vehicle()
    {
        return v;
    }
    
};