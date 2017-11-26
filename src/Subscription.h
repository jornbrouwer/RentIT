#ifndef SUBSCRIPTION_H_
#define SUBSCRIPTION_H_

#include <string>
#include "typedef.h"

class Subscription
{
public:
    Subscription(eurocents aPerHour, eurocents aPerDay, eurocents aPerWeekend, eurocents aPerWeek, eurocents perKm, const std::string & aCarType, const std::string & aType, const std::string & aSubType);
    virtual ~Subscription();
    virtual std::string str();
    virtual eurocents getPrice();
    virtual eurocents getHourlyPrice();
    virtual eurocents getPerKm();
protected:
    eurocents perHour;
    eurocents perDay;
    eurocents perWeekend;
    eurocents perWeek;
    eurocents perKm;
    std::string carType;
    std::string type;
    std::string subType;
};

#endif /*SUBSCRIPTION_H_*/