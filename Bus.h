#ifndef BUS_H
#define BUS_H

#include <bits/stdc++.h>
#include "Seat.h"
using namespace std;

class Bus
{
private:
    string busId;
    string busNumber;
    string busType;
    vector<Seat> seats;

public:
    Bus(string id, string number, string type, int seatCount);
    void showAvailableSeats();
    bool bookSeat(string &seatId);
    string getId();
};

#endif // BUS_H
