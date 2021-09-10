#include "Building.h"
#include<bits/stdc++.h>
using namespace std;
class ParkingManagement{
    private:
    Building b;
    public:
    void init_building();
    void park(int reg_no,string brand,string color);
    void un_park(int reg_no);
    void get_vehicles_of_color(string color);
};