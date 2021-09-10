#include "Floor.h"
#include<bits/stdc++.h>
using namespace std;
class Building{
    private:
    vector<Floor> floors;
    public:
    void init_floors(int n)
    {
        floors.resize(n);
        for(int i=0;i<n;i++)
        {
            floors[i].init_slots(n);
        }
    }
    int get_empty_floor()
    {
        int n=floors.size();
        for(int i=0;i<n;i++)
        {
            if(!floors[i].get_occupied()) return i;
        }
        return -1;
    }
    int park(int regno,string brand,string color)
    {
        int f,slot;
        while(1)
        {
           
        f=get_empty_floor();
             cout<<"floor"<<f<<"\n";
        if(f==-1) return -1;
        slot = floors[f].get_empty_slot();
        if(slot==-1)
        {
            floors[f].set_occupied(1);
        }
         else
         {
             break;
         }
        }
         cout<<"slot"<<slot<<"\n";
        floors[f].set_slot_occupied(slot,1,regno,brand,color);
        return 1;
    }
    int un_park(int regno)
    {
        int n=floors.size();
        for(int i=0;i<n;i++)
        {
            if(floors[i].un_park(regno)!=-1)
            {
                floors[i].set_occupied(0);
                return i;
            }
        }
        return -1;
    }
    vector<Vehicle> get_vehicles_of_color(string color)
    {
        vector<Vehicle> result;
        int n=floors.size();
        for(int i=0;i<n;i++)
        {
            vector<Vehicle> v=floors[i].get_vehicles_of_color(color);
            result.insert(result.end(),v.begin(),v.end());
        }
        return result;
    }
};
