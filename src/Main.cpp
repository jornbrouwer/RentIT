#include <iostream>
#include "PaidSubscription.h"
#include "Customer.h"
#include "StationWagon.h"
#include "Reservation.h"
// #include "PaymentInterface.h"
// #include "Invoice.h"

int main(int argc, char** argv)
{
    std::string now = "2017-11-26 14:00";
    std::string rentalBeginTime = "2017-11-19 14:00";
    std::string rentalEndTime = now;
    std::string carEndTime = rentalEndTime;
    

    PaidSubscription paidSub("station_wagon", "perWeek");
    std::cout << paidSub.str() << std::endl;
    Customer customer("Ilze", paidSub, 40000);
    std::cout << customer.str() << std::endl;
    // StationWagon stationWagon1(600, carEndTime); //After every checkout drivenKm is set to 0, endTime is set at moment of checkout
    // Reservation reservation(customer, rentalBeginTime, rentalEndTime, stationWagon1);


    // if (now == reservation.getEndTime())
    // {
    //     std::cout << "HEUJ" << std::endl;
    // }
    


    
    // Invoice invoice(reservation);
    // PaymentInterface iPay(invoice.getTotalPrice());
    // if(iPay.pay(invoice))
    // {
    //     std::cout << "Betaling geslaagd!" << std::endl;
    // }
    // else
    // {
    //     std::cout << "Betaling mislukt" << std::endl;
    // }
    return 0;
}