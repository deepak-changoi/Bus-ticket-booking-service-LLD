#ifndef BOOKING_H
#define BOOKING_H

#include <bits/stdc++.h>
using namespace std;

class Booking {
private:
    string bookingId;
    string userId;
    string busId;
    string seatNumber;

public:
    Booking(string id, string userId, string busId, string seatNumber);
    void showBookingDetails();
    void cancelBooking();
};

#endif // BOOKING_H
