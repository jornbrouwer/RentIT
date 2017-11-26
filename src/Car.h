#ifndef CAR_H_
#define CAR_H_

#include <string>

class Car
{
public:
    Car(unsigned long aDrivenKm, const std::string& anEndTime);
    virtual ~Car();
    virtual std::string getEndTime();
    virtual unsigned long getDrivenKm();
protected:
    unsigned long drivenKm;
    std::string endTime;
};

#endif /*CAR_H_*/