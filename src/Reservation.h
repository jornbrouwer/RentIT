#ifndef RESERVATION_H_
#define RESERVATION_H_

#include <string>
#include "Customer.h"
#include "Car.h"

class Reservation
{
public:
    Reservation(const Customer& aCustomer, const std::string& aBeginTime, const std::string& anEndTime, const Car& aCar, bool paid=false);
    ~Reservation();
    std::string str();
    std::string getEndTime() const;
    Car getCar() const;
    bool getPaid() const;
    Customer getCustomer() const;
private:
    Customer customer;
    std::string beginTime;
    std::string endTime;
    Car car;
    bool paid;
};

#endif /*RESERVATION_H_*/