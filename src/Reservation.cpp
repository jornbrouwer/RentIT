#include "Reservation.h"

Reservation::Reservation(const Customer& aCustomer, const std::string& aBeginTime, const std::string& anEndTime, const Car& aCar, bool aPaid)
:customer(aCustomer), beginTime(aBeginTime), endTime(anEndTime), car(aCar), paid(aPaid)
{

}

Reservation::~Reservation()
{

}

std::string Reservation::str()
{
    std::string reservationInfo = "This reservation is made by:\t";
    reservationInfo += customer.getName() + "\r\n";
    reservationInfo += "CardNr:\t" +  std::to_string(customer.getCardNr()) + "\r\n";
    reservationInfo += "Begins at:\t" + beginTime + "\r\n";
    reservationInfo += "Ends at:\t" + endTime + "\r\n";
    reservationInfo += "Driven km:\t" + std::to_string(car.getDrivenKm()) + "\r\n";
    reservationInfo += "Hours too late:\t" + std::to_string(car.getHoursTooLate()) + "\r\n";
    return reservationInfo;
}

std::string Reservation::getEndTime() const
{
    return endTime;
}

Car Reservation::getCar() const
{
    return car;
}

bool Reservation::getPaid() const
{
    return paid;
}

Customer Reservation::getCustomer() const
{
    return customer;
}