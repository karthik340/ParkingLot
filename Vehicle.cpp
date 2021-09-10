#include "Ticket.h"
#include<bits/stdc++.h>
using namespace std;
class Vehicle{
    private:
    Ticket t;
    string brand;
    string color;
    int reg_no;
    public:
    void set_vehicle(int regno,string brand,string color)
    {
         reg_no=regno;
        this->color=color;
        this->brand=brand;
        t.set_ticket();
    }
    int get_regno()
    {
        return reg_no;
    }
    string get_brand()
    {
        return brand;
    }
    string get_color()
    {
        return color;
    }
};