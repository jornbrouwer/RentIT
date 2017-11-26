#include "ReservationInfo.h"

ReservationInfo::ReservationInfo(const std::vector<Reservation>& someReservations)
:reservations(someReservations)
{

}

ReservationInfo::~ReservationInfo()
{

}

Reservation ReservationInfo::getFirstUnpaidReservation()
{
    for (const Reservation& r : reservations)
    {
        if (r.getPaid() == false)
        {
            return r;
        }
    }
}

Invoice ReservationInfo::getInvoiceInformation()
{
    Reservation r = getFirstUnpaidReservation();
    Customer c = r.getCustomer();
    Car a = r.getCar();
    unsigned long hoursTooLate = a.getHoursTooLate();
    unsigned long drivenKm = a.getDrivenKm();
    Subscription subscription = c.getSubscription();
    Invoice invoice{r, c, a, hoursTooLate, drivenKm, subscription};
    return invoice;
}