#ifndef RESERVATION_H_
#define RESERVATION_H_

#include <string>
#include "Customer.h"
#include "Car.h"

class Reservation
{
public:
    Reservation(const Customer& aCustomer, const std::string& aBeginTime, const std::string& anEndTime, const Car& aCar);
    ~Reservation();
    std::string getEndTime() const;
    Car getCar();
private:
    Customer customer;
    std::string beginTime;
    std::string endTime;
    Car car;
};

#endif /*RESERVATION_H_*/