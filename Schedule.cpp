#include "Schedule.h"
#include <bits/stdc++.h>
using namespace std;

void Schedule::addSchedule(string busId, string time)
{
    timings[busId] = time;
}

void Schedule::showSchedule() {
    for (auto &pair : timings)
    {
        cout << "Bus ID: " << pair.first << " Timing: " << pair.second << endl;
    }
}
