#ifndef INVOICE_H_
#define INVOICE_H_

#include "Reservation.h"
#include "Customer.h"
#include "Car.h"
#include "Subscription.h"

struct Invoice
{
    Reservation r;
    Customer c;
    Car a;
    unsigned long hoursTooLate;
    unsigned long drivenKm;
    Subscription sub;
};

#endif //INVOICE_H_