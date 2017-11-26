#include "Car.h"

Car::Car(unsigned long aDrivenKm, unsigned long someHoursTooLate)
:drivenKm(aDrivenKm), hoursTooLate(someHoursTooLate)
{
}

Car::Car(const Car& rhs)
:drivenKm(rhs.drivenKm), hoursTooLate(rhs.hoursTooLate)
{
}

Car::~Car(){}

unsigned long Car::getHoursTooLate() const
{
    return hoursTooLate;
}

unsigned long Car::getDrivenKm() const
{
    return drivenKm;
}