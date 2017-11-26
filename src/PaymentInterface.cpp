#include <iostream>
#include "PaymentInterface.h"
#include "Invoice.h"

PaymentInterface::PaymentInterface(const std::vector<Reservation>& someReservations)
:information(someReservations)
{
    
}
PaymentInterface::~PaymentInterface()
{

}

void PaymentInterface::makeNextPayment()
{
    Invoice invoice = information.getInvoiceInformation();
    unsigned long total = 0;
    total += invoice.sub.getPrice();
    if (invoice.hoursTooLate > 0)
    {
        unsigned long fine = invoice.hoursTooLate * invoice.sub.getHourlyPrice();
        total += fine;
    }
    unsigned long kmPrice = invoice.drivenKm * invoice.sub.getPerKm();
    total += kmPrice;
    moneyWired = invoice.c.makePayment(total);
    if (moneyWired)
    {
        std::cout << "RentIt has succesfully wired " + std::to_string(total) + " from your bankaccount. \r\n";
    }
    else
    {
        std::cout << "RentIt could not wire " + std::to_string(total) + " from your bankaccount. Please try again.\r\n";
    }
}