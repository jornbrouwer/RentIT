#include "Reservation.h"

Reservation::Reservation(const Customer& aCustomer, const std::string& aBeginTime, const std::string& anEndTime, const Car& aCar)
:customer(aCustomer), beginTime(aBeginTime), endTime(anEndTime), car(aCar)
{

}

Reservation::~Reservation()
{

}

std::string Reservation::getEndTime() const
{
    return endTime;
}

Car Reservation::getCar()
{
    return car;
}