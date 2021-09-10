#include<bits/stdc++.h>
using namespace std;
int id=0;
class Ticket{
    private:
    int ticket_id;
    int start_time;
    int end_time;
    public:
    void set_ticket()
    {
        id++;
        ticket_id=id;
    }
};