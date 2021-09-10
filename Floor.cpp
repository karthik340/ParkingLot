#include "Slot.h"
#include<bits/stdc++.h>
using namespace std;
class Floor{
    private:
        vector<Slot> slots;
        int floor_id;
        int occupied;
    public:
        void init_slots(int n)
        {
            occupied=false;
            slots.resize(n);
            for(int i=0;i<n;i++)
            {
                slots[i].set_occupied(0);
            }
        }
    void set_occupied(int i)
    {
        occupied=i;
    }
     int get_occupied()
    {
        return occupied;
    } 
    void set_slot_occupied(int index,int value, int regno,string brand,string color)
    {
        slots[index].set_occupied(value);
        slots[index].set_vehicle(regno,brand,color);
    }
    int get_empty_slot()
    {
        int n=slots.size();
        for(int i=0;i<n;i++)
        {
            if(!slots[i].get_occupied()) return i;
        }
        return -1;
    }
    
    int un_park(int reg_no)
    {
        int n=slots.size();
        for(int i=0;i<n;i++)
        {
            if(slots[i].get_occupied()&&slots[i].get_regno()==reg_no)
            {
                slots[i].set_occupied(0);
                return i;
            }
        }
        return -1;
    }
    vector<Vehicle> get_vehicles_of_color(string color)
    {
        vector<Vehicle> v;
        int n=slots.size();
        for(int i=0;i<n;i++)
        {
            if(slots[i].get_occupied())
            {
                if(slots[i].get_color()==color)
                {
                    v.push_back(slots[i].get_vehicle());
                }
            }
        }
        return v;
    }
};
