#ifndef SCHEDULE_H
#define SCHEDULE_H

#include <bits/stdc++.h>
using namespace std;

class Schedule {
private:
    map<string, string> timings; // Key: Bus ID, Value: Timing

public:
    void addSchedule( string busId,  string time);
    void showSchedule();
};

#endif
