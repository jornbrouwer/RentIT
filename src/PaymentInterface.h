#ifndef PAYMENTINTERFACE_H_
#define PAYMENTINTERFACE_H_

#include "ReservationInfo.h"

class PaymentInterface
{
public:
PaymentInterface(const std::vector<Reservation>& someReservations);
~PaymentInterface();
void makeNextPayment();
private:
ReservationInfo information;
unsigned long total;
bool moneyWired;
};

#endif /*RESERVATION_H_*/