#ifndef CAR_H_
#define CAR_H_

#include <string>

class Car
{
public:
    Car(unsigned long aDrivenKm, unsigned long someHoursTooLate);
    Car(const Car& rhs);
    virtual ~Car();
    virtual unsigned long getDrivenKm() const;
    virtual unsigned long getHoursTooLate() const;
protected:
    unsigned long drivenKm;
    unsigned long hoursTooLate;
};

#endif /*CAR_H_*/