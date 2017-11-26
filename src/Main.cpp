#include <iostream>
#include <vector>
#include "PaidSubscription.h"
#include "Customer.h"
#include "StationWagon.h"
#include "Reservation.h"
#include "PaymentInterface.h"
// #include "Invoice.h"

int main(int argc, char** argv)
{
    // Set all variables and make instances of all needed classes to make a payment
    std::string now = "2017-11-26 14:00";
    std::string rentalBeginTime = "2017-11-19 14:00";
    std::string rentalEndTime = now;

    
    PaidSubscription paidSub("station_wagon", "perWeek");
    Customer customer("Ilze", paidSub, 4000000);
    StationWagon stationWagon1(600, 0); //After every checkout drivenKm is set to 0, endTime is set at moment of checkout
    Reservation reservation(customer, rentalBeginTime, rentalEndTime, stationWagon1);

    std::vector<Reservation> reservations;
    reservations.push_back(reservation);

    PaymentInterface iPay(reservations);
    
    // Print out all the information that was just initialised
    std::cout << paidSub.str() << std::endl;
    std::cout << customer.str() << std::endl;
    std::cout << stationWagon1.str() << std::endl;
    std::cout << reservation.str() << std::endl;

    // Start the use case here
    if (now == reservation.getEndTime())
    {
        iPay.makeNextPayment();
    }
    return 0;
}