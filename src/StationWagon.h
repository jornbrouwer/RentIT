#ifndef STATIONWAGON_H_
#define STATIONWAGON_H_

#include "Car.h"

class StationWagon: public Car
{
public:
    StationWagon(unsigned long aDrivenKm, unsigned long someHoursTooLate);
    ~StationWagon();
    std::string str();
private:

};

#endif /*STATIONWAGON_H_*/