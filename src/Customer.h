#ifndef CUSTOMER_H_
#define CUSTOMER_H_

#include <string>
#include "Subscription.h"

class Customer
{
public:
    Customer(const std::string& aName, const Subscription& aSubscription, unsigned long nMoney=1000);
    virtual ~Customer();
    void generateCardNr();

private:
    std::string name;
    Subscription subscription;
    unsigned long nMoney;
    unsigned long cardNr;
};

#endif /*CUSTOMER_H_*/