#include "Seat.h"

Seat::Seat(string id, bool isAvailable) : seatId(id), available(isAvailable) {}

string Seat::getId() const { return seatId; }

bool Seat::isAvailable() const { return available; }

void Seat::setAvailability(bool status) { available = status; }