#include<bits/stdc++.h>
using namespace std;

#include "User.h"
#include "Admin.h"
#include "Bus.h"
#include "Booking.h"
#include "Payment.h"
#include "Notification.h"
#include "Schedule.h"

int main() {
    Admin admin("A001", "John");

    Bus bus1("B001", "KA-01-1234", "AC", 40);
    admin.addBus(bus1);

    User user("U001", "Deepak", "deepak@example.com", "password123");

    if (user.login("deepak@example.com", "password123")) {
        std::cout << "Login successful!" << std::endl;
    }

    Booking booking("BK001", user.getId(), bus1.getId(), "Seat5");
    user.addBooking(booking);

    Payment payment;
    payment.processPayment(user.getId(), 500.0);

    Notification notification;
    notification.sendConfirmationEmail("deepak@example.com");

    Schedule schedule;
    admin.updateBusSchedule(schedule, bus1.getId(), "10:00 AM");

    bus1.showAvailableSeats();
    booking.showBookingDetails();

    return 0;
}
