#ifndef ADMIN_H
#define ADMIN_H

#include <bits/stdc++.h>
#include "Bus.h"
#include "Schedule.h"

using namespace std;

class Admin {
private:
    string adminId;
    string name;

public:
    Admin(string id, string name);
    void addBus(Bus bus);
    void updateBusSchedule(Schedule schedule, string busId, string newTime);
    void removeBus(vector<Bus> buses, string busId);
};

#endif // ADMIN_H
