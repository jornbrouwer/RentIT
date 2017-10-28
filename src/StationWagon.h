#ifndef STATIONWAGON_H_
#define STATIONWAGON_H_

#include "Car.h"

class StationWagon: public Car
{
public:
    StationWagon(unsigned long aDrivenKm, const std::string& anEndTime);
    ~StationWagon();
private:

};

#endif /*STATIONWAGON_H_*/