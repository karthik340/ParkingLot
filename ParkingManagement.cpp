#include "Building.h"
#include<bits/stdc++.h>
using namespace std;

class ParkingManagement{
    private:
    Building b;
    public:
    void init_building(){
        b.init_floors(2);
    }
    void park(int reg_no,string brand,string color)
    {
         if(b.park(reg_no,brand,color)==-1)
         {
             cout<<"parking failed\n";
         }
        else
        {
            cout<<"parking successful\n";
        }
    }
    void un_park(int reg_no)
    {
        if(b.un_park(reg_no)==-1)
        {
            cout<<"car with regno not found !\n";
        }
        else
        {
            cout<<"unparked successfully\n";
        }
    }
    void get_vehicles_of_color(string color)
    {
        vector<Vehicle> v=b.get_vehicles_of_color(color);
        int n=v.size();
        for(int i=0;i<n;i++)
        {
            cout<<v[i].get_regno()<<" "<<v[i].get_brand()<<"  "<<v[i].get_color()<<"\n";
        }
    }
};