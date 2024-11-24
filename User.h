#ifndef USER_H
#define USER_H

#include <string>
#include <vector>
#include "Booking.h"
using namespace std;

class User
{
private:
    string userId;
    string name;
    string email;
    string password;
    vector<Booking> bookings;

public:
    User(string id, string name, string email, string password);
    bool login( string email,  string password) ;
    void signUp( string name,  string email,  string password);
    void getBookings();
    void addBooking(Booking booking);
    string getId();
    string getName();
};

#endif
