#ifndef INVOICE_H_
#define INVOICE_H_

#include "typedef.h"
#include "Reservation.h"

class Invoice
{
public:
    Invoice(const Reservation& aReservation);
    void getFine()
    eurocents getTotalPrice();
    ~Invoice();
    
private:
    Reservation reservation;
    eurocents fine;
    eurocents totalPrice;
};

#endif /*INVOICE_H_*/