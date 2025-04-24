#include "PidGain.h"

PidGain ::PidGain(double _kp, double _ki, double _kd) : kp(_kp), ki(_ki), kd(_kd) {}

void PidGain ::setPidGain(double _kp, double _ki, double _kd)
{
    kp = _kp;
    ki = _ki;
    kd = _kd;
}

double PidGain ::getkp()
{
    return kp;
}
double PidGain ::getki()
{
    return ki;
}
double PidGain ::getkd()
{
    return kd;
}