#include <bits/stdc++.h>
#include "Booking.h"
using namespace std;

Booking::Booking(string id, string userId, string busId, string seatNumber)
    : bookingId(id), userId(userId), busId(busId), seatNumber(seatNumber) {}

void Booking::showBookingDetails()
{
    cout << "Booking ID: " << bookingId << ", User ID: " << userId
         << ", Bus ID: " << busId << ", Seat: " << seatNumber << endl;
}

void Booking::cancelBooking()
{
    cout << "Booking ID: " << bookingId << " has been cancelled." << endl;
}
