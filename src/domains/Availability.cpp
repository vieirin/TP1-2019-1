#include <domains/Availability.hpp>
#include <stdexcept>

Availability::Availability(int amount) { setAvailability(amount); }

void Availability::setAvailability(int amount) {
    if (amount < 0 || amount > 250)
        throw std::invalid_argument("Availability should be between 0 and 250");
    availability = amount;
}

int Availability::getAvailability() { return availability; }