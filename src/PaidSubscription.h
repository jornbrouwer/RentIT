#ifndef PAIDSUBSCRIPTION_H_
#define PAIDSUBSCRIPTION_H_

#include "Subscription.h"
#include <string>

class PaidSubscription: public Subscription
{
public:
    PaidSubscription(const std::string& aCarType = "passenger_car", const std::string& aSubType = "perHour");
    virtual ~PaidSubscription();
    std::string str();
private:
    std::string carType;
    std::string subType;
    unsigned long kmFree;
};

#endif /*PAIDSUBSCRIPTION_H_*/