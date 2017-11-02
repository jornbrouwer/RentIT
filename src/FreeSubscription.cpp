#include "FreeSubscription.h"

FreeSubscription::FreeSubscription(const std::string& aCarType, const std::string& aSubType = "perHour")
:Subscription(600, 5000, 7000, 15000), carType(aCarType), subType(aSubType)
{
    if(carType == "station_wagon")
    {
        perHour += 150;
        perDay += 1000;
        perWeekend += 2000;
        perWeek += 3000;
    }
}

std::string FreeSubscription::str()
{
    std::string freeSubInfo = "Prices (in cents) for free subscription with car type: " + carType + "\r\n";
    freeSubInfo += "\r\n";
    freeSubInfo += ("Per hour\t" + std::to_string(perHour) + "\r\n");
    freeSubInfo += ("Per day \t" + std::to_string(perDay) + "\r\n");
    freeSubInfo += ("Per weekend\t" + std::to_string(perWeekend) + "\r\n");
    freeSubInfo += ("Per week\t" + std::to_string(perWeek) + "\r\n");
    return freeSubInfo;
}

FreeSubscription::~FreeSubscription()
{}