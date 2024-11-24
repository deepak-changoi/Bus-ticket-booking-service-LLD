#include "Bus.h"
#include <bits/stdc++.h>
using namespace std;

Bus::Bus(string id, string number, string type, int seatCount)
    : busId(id), busNumber(number), busType(type)
{
    for (int i = 1; i <= seatCount; ++i)
    {
        seats.emplace_back("Seat" + to_string(i), true);
    }
}

void Bus::showAvailableSeats()
{
    cout << "Available seats on Bus ID: " << busId << ": ";
    for (auto &seat : seats)
    {
        if (seat.isAvailable())
        {
            cout << seat.getId() << " ";
        }
    }
    cout << endl;
}

bool Bus::bookSeat(string &seatId)
{
    for (auto &seat : seats)
    {
        if (seat.getId() == seatId && seat.isAvailable())
        {
            seat.setAvailability(false);
            return true;
        }
    }
    return false;
}

string Bus::getId() { return busId; }
