#include "PaidSubscription.h"

PaidSubscription::PaidSubscription(const std::string& aCarType, const std::string& aSubType)
:Subscription(400, 4000, 6000, 14000, aCarType, "Paid", aSubType), kmFree(100)
{
}

std::string PaidSubscription::getSub() const
{
    std::string subInfo = "Paid," + subType + ", " + carType;
    return subInfo;
}

std::string PaidSubscription::str()
{
    std::string freeSubInfo = "Chosen subscription and its prices (in cents) are:\r\n";
    freeSubInfo += "Car type:\t" + Subscription::carType + "\r\n";
    freeSubInfo += "Subscription type:\t" + Subscription::type + "(" + Subscription::subType + ")\r\n";
    freeSubInfo += "Subscription price:\t";
    if (Subscription::subType == "perHour")
    {
        freeSubInfo += std::to_string(Subscription::perHour);
    }
    else if (Subscription::subType == "perDay")
    {
        freeSubInfo += std::to_string(Subscription::perDay);
    }
    else if (Subscription::subType == "perWeekend")
    {
        freeSubInfo += std::to_string(Subscription::perWeekend);
    }
    else if (Subscription::subType == "perWeek")
    {
        freeSubInfo += std::to_string(Subscription::perWeek);
    }
    freeSubInfo += "\r\n";
    return freeSubInfo;
}

PaidSubscription::~PaidSubscription()
{

}