#ifndef ESCHW3_H
#define ESCHW3_H

#define ESCSERIAL_TIMEOUT 3

#include <Arduino.h>
#include "device.h"

class EscHW3 : public AbstractDevice
{
private:
    uint8_t thr_ = 0, pwm_ = 0, alphaRpm_;
    float rpm_;
    Stream &serial_;

protected:
public:
    EscHW3(Stream &serial, uint8_t alphaRpm);
    virtual void update();
    uint8_t *thrP();
    uint8_t *pwmP();
    float *rpmP();
};

#endif