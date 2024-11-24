#include <bits/stdc++.h>
#include "User.h"
using namespace std;

User::User(string id, string name, string email, string password)
    : userId(id), name(name), email(email), password(password) {}

bool User::login(string inputEmail, string inputPassword)
{
    return (email == inputEmail && password == inputPassword);
}

void User::signUp(string name, string email, string password)
{
    cout << "SignUp successful! Welcome, " << name << "." << endl;
}

void User::getBookings()
{
    if (bookings.empty())
    {
        cout << "No bookings available for user: " << name << "." << endl;
        return;
    }

    cout << "Bookings for user: " << name << endl;
    for (auto booking : bookings)
    {
        booking.showBookingDetails();
    }
}

void User::addBooking(Booking booking)
{
    bookings.push_back(booking);
}

string User::getId()
{
    return userId;
}

string User::getName()
{
    return name;
}
