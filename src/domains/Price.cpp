#include <domains/Price.hpp>
#include <stdexcept>
#include <iostream>

Price::Price(float value)
{
    setPrice(value);
}

void Price::setPrice(float value)
{
    if (value < 0 || value > 1000)
        throw std::invalid_argument("Price value must be between 0 and 1000");
    this->value = value;
}

float Price::getPrice()
{
    return value;
}