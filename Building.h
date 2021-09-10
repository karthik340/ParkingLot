#include "Floor.h"
class Building{
    private:
        vector<Floor> floors;
    public:
        void init_floors(int n);
        int get_empty_floor();
        int park(int regno,string brand,string color);
        int un_park(int regno);
        vector<Vehicle> get_vehicles_of_color(string color);
};
