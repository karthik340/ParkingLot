#include"Slot.h"
class Floor{
    private:
        vector<Slot> slots;
        int floor_id;
        int occupied;
    public:
        void init_slots(int n);
        void set_occupied(int i);
        int get_occupied();
        void set_slot_occupied(int index,int value, int regno,string brand,string color);
        int get_empty_slot();
        int un_park(int reg_no);
        vector<Vehicle> get_vehicles_of_color(string color);
};
