#include "Subscription.h"

Subscription::Subscription(eurocents aPerHour, eurocents aPerDay, eurocents aPerWeekend, eurocents aPerWeek, eurocents aPerKm, const std::string & aCarType, const std::string & aType, const std::string & aSubType)
:perHour(aPerHour), perDay(aPerDay), perWeekend(aPerWeekend), perWeek(aPerWeek), perKm(aPerKm), carType(aCarType), type(aType), subType(aSubType)
{
    if(carType == "station_wagon")
    {
        perHour += 150;
        perDay += 1000;
        perWeekend += 2000;
        perWeek += 3000;
        perKm += 5;
    }
}


std::string Subscription::str()
{
     std::string freeSubInfo = "Chosen subscription and its prices (in cents) are:\r\n";
    freeSubInfo += "Subscription type:\t" + type + "(" + subType + ")\r\n";
    freeSubInfo += "Car type:\t" + carType + "\r\n";
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

eurocents Subscription::getPrice()
{
    if (subType == "perHour")
    {
        return perHour;
    }
    else if (subType == "perDay")
    {
        return perDay;
    }
    else if (subType == "perWeekend")
    {
        return perWeekend;
    }
    else if (subType == "perWeek")
    {
        return perWeek;
    }
    else
    {
        return 0;
    }
}

eurocents Subscription::getHourlyPrice()
{
    return perHour;
}

eurocents Subscription::getPerKm()
{
    return perKm;
}

Subscription::~Subscription()
{}