#include "StationWagon.h"

StationWagon::StationWagon(unsigned long aDrivenKm, unsigned long someHoursTooLate)
:Car(aDrivenKm, someHoursTooLate)
{

}
StationWagon::~StationWagon(){}

std::string StationWagon::str()
{
    std::string carInfo = "Car information:\r\n";
    carInfo += "Type:\tStation wagon\r\n";
    carInfo += "Driven km:\t";
    carInfo += std::to_string(Car::drivenKm);
    carInfo += "\r\n";
    carInfo += "Hours too late:\t" + std::to_string(Car::hoursTooLate) + "\r\n";
    return carInfo;
}