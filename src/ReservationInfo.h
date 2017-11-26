#ifndef RESERVATIONINFO_H_
#define RESERVATIONINFO_H_

#include <vector>
#include "Invoice.h"
#include "Reservation.h"
#include "Invoice.h"

class ReservationInfo
{
public:
    ReservationInfo(const std::vector<Reservation>& someReservations);
    Invoice getInvoiceInformation();
    Reservation getFirstUnpaidReservation();
    ~ReservationInfo();
private:
    std::vector<Reservation> reservations;
};

#endif //RESERVATIONINFO_H_