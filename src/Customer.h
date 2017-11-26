#ifndef CUSTOMER_H_
#define CUSTOMER_H_

#include <string>
#include "typedef.h"
#include "Subscription.h"

class Customer
{
public:
    Customer(const std::string& aName, const Subscription& aSubscription, eurocents nMoney=1000);
    virtual ~Customer();
    void generateCardNr();
    std::string str();
    unsigned long getCardNr() const;
    std::string getName() const;
    Subscription getSubscription() const;
    bool makePayment(eurocents price);

private:
    std::string name;
    Subscription subscription;
    eurocents nMoney;
    unsigned long cardNr;
};

#endif /*CUSTOMER_H_*/