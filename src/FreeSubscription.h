#ifndef FREESUBSCRIPTION_H_
#define FREESUBSCRIPTION_H_

#include "Subscription.h"
#include <string>

class FreeSubscription: public Subscription
{
public:
    FreeSubscription(const std::string& aCarType = "passenger_car", const std::string& aSubType = "perHour");
    virtual ~FreeSubscription();
    std::string str();
private:
    std::string carType;
    std::string subType;
};

#endif /*FREESUBSCRIPTION_H_*/