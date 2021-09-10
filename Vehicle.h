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
    void set_vehicle(int regno,string brand,string color);
    int get_regno();
    string get_brand();
    string get_color();
};