#include "PaidSubscription.h"

PaidSubscription::PaidSubscription(const std::string& aCarType, const std::string& aSubType)
:Subscription(400, 4000, 6000, 14000), carType(aCarType), subType(aSubType), kmFree(100)
{
    if(carType == "station_wagon")
    {
        perHour += 150;
        perDay += 1000;
        perWeekend += 2000;
        perWeek += 3000;
    }
}

std::string PaidSubscription::str()
{
    std::string freeSubInfo = "Prices (in cents) for free subscription with car type: " + carType + "\r\n";
    freeSubInfo += "\r\n";
    freeSubInfo += ("Per hour\t" + std::to_string(perHour) + "\r\n");
    freeSubInfo += ("Per day \t" + std::to_string(perDay) + "\r\n");
    freeSubInfo += ("Per weekend\t" + std::to_string(perWeekend) + "\r\n");
    freeSubInfo += ("Per week\t" + std::to_string(perWeek) + "\r\n");
    return freeSubInfo;
}