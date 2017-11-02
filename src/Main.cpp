#include <iostream>
#include "PaidSubscription.h"
#include "Customer.h"
#include "StationWagon.h"
#include "Reservation.h"
#include "PaymentInterface.h"
#include "Invoice.h"

int main(int argc, char** argv)
{
    std::string rentalBeginTime = "";
    std::string rentalEndTime = "";
    std::string carEndTime = rentalEndTime;
 
    PaidSubscription paidSub("station_wagon", "perWeek");
    Customer customer("Ilze", paidSub);
    StationWagon stationWagon1(600, carEndTime); //After every checkout drivenKm is set to 0, endTime is set at moment of checkout
    Reservation reservation(customer, rentalBeginTime, rentalEndTime, stationWagon1);
    Invoice invoice(reservation);
    PaymentInterface iPay(invoice.getTotalPrice());
    if(iPay.pay(invoice))
    {
        std::cout << "Betaling geslaagd!" << std::endl;
    }
    else
    {
        std::cout << "Betaling mislukt" << std::endl;
    }
    return 0;
}