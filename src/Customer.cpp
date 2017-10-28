#include "Customer.h"
#include <random>
#include <climits>

Customer::Customer(const std::string& aName, const Subscription& aSubscription, unsigned long aNMoney)
:name(aName), subscription(aSubscription), nMoney(aNMoney), cardNr(0)
{
    generateCardNr();
}

void Customer::generateCardNr()
{
    static std::random_device rd;
    static std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, ULLONG_MAX);
    cardNr = dis(gen);
}