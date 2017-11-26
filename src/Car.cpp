#include "Car.h"

Car::Car(unsigned long aDrivenKm, const std::string& anEndTime)
:drivenKm(aDrivenKm), endTime(anEndTime)
{

}

Car::~Car(){}

std::string Car::getEndTime()
{
    return endTime;
}

unsigned long Car::getDrivenKm()
{
    return drivenKm;
}