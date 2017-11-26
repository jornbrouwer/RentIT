#include "Subscription.h"

Subscription::Subscription(eurocents aPerHour, eurocents aPerDay, eurocents aPerWeekend, eurocents aPerWeek, const std::string & aCarType, const std::string & aType, const std::string & aSubType)
:perHour(aPerHour), perDay(aPerDay), perWeekend(aPerWeekend), perWeek(aPerWeek), carType(aCarType), type(aType), subType(aSubType)
{
    if(carType == "station_wagon")
    {
        perHour += 150;
        perDay += 1000;
        perWeekend += 2000;
        perWeek += 3000;
    }
}

std::string Subscription::getSub() const
{
    std::string subInfo = type + ", " + subType + ", " + carType;
    return subInfo;
}


std::string Subscription::str()
{
     std::string freeSubInfo = "Chosen subscription and its prices (in cents) are:\r\n";
    freeSubInfo += "Car type:\t" + carType + "\r\n";
    freeSubInfo += "Subscription type:\t" + type + "(" + subType + ")\r\n";
    freeSubInfo += "Subscription price:\t";
    if (subType == "perHour")
    {
        freeSubInfo += std::to_string(perHour);
    }
    else if (subType == "perDay")
    {
        freeSubInfo += std::to_string(perDay);
    }
    else if (subType == "perWeekend")
    {
        freeSubInfo += std::to_string(perWeekend);
    }
    else if (subType == "perWeek")
    {
        freeSubInfo += std::to_string(perWeek);
    }
    freeSubInfo += "\r\n";
    return freeSubInfo;
}

Subscription::~Subscription()
{}