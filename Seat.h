#ifndef SEAT_H
#define SEAT_H

#include <bits/stdc++.h>
using namespace std;

class Seat {
private:
    string seatId;
    bool available;

public:
    Seat(string id, bool isAvailable);
    string getId() const;
    bool isAvailable() const;
    void setAvailability(bool status);
};

#endif // SEAT_H
