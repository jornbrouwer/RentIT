#include "Subscription.h"

Subscription::Subscription(eurocents aPerHour, eurocents aPerDay, eurocents aPerWeekend, eurocents aPerWeek)
{
    perHour = aPerHour;
    perDay = aPerDay;
    perWeekend = aPerWeekend;
    perWeek = aPerWeek;
}

Subscription::~Subscription()
{}