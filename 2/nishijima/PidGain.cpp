#include "PidGain.h"

PidGain::PidGain(double _kp, double _ki, double _kd) : kp(_kp), ki(_ki), kd(_kd)
{
}

void PidGain::setPidGain(double _kp, double _ki, double _kd)
{
    kp = _kp;
    ki = _ki;
    kd = _kd;
}

double PidGain::getKp()
{
    return kp;
}

double PidGain::getKi()
{
    return ki;
}

double PidGain::getKd()
{
    return kd;
}