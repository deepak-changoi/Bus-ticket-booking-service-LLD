#include <bits/stdc++.h>
#include "Admin.h"
using namespace std;

Admin::Admin(string id, string name) : adminId(id), name(name) {}

void Admin::addBus(Bus bus) {
    cout << "Bus with ID: " << bus.getId() << " added successfully by Admin: " << name << "." << endl;
}

void Admin::updateBusSchedule(Schedule schedule, string busId, string newTime) {
    schedule.addSchedule(busId, newTime);
    cout << "Schedule updated for Bus ID: " << busId << "." << endl;
}

void Admin::removeBus(vector<Bus> buses, string busId) {

  for (auto it = buses.begin(); it != buses.end(); ) {
    if (it->getId() == busId) {
        it = buses.erase(it);
    } else {
        ++it;
    }
}
    cout << "Bus with ID: " << busId << " removed successfully." << endl;
}
