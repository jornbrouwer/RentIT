#include "Customer.h"
#include <random>

Customer::Customer(const std::string& aName, const Subscription& aSubscription, unsigned long aNMoney)
:name(aName), subscription(aSubscription), nMoney(aNMoney), cardNr(0)
{
    generateCardNr();
}

void Customer::generateCardNr()
{
    static std::random_device rd;
    static std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 1000);
    cardNr = dis(gen);
}

std::string Customer::str()
{
    std::string customerInfo = "Customer information:\r\n";
    customerInfo += "Name:\t" + name + "\r\n";
    customerInfo += "Subscription:\t"+subscription.getSub()+ "\r\n";
    return customerInfo;    
}

Customer::~Customer()
{
}