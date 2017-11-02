#ifndef SUBSCRIPTION_H_
#define SUBSCRIPTION_H_

#include "typedef.h"

class Subscription
{
public:
    Subscription(eurocents aPerHour, eurocents aPerDay, eurocents aPerWeekend, eurocents aPerWeek);
    virtual ~Subscription();
protected:
    eurocents perHour;
    eurocents perDay;
    eurocents perWeekend;
    eurocents perWeek;
};

#endif /*SUBSCRIPTION_H_*/