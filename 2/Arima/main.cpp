#include "stdio.h"
#include "PidGain.h"
#include <iostream>

int main(void)
{
    PidGain pidGain(10.0, 20.0, 30.0);
    printf("%f, %f, %f \n", pidGain.getkp(), pidGain.getki(), pidGain.getkd());

    // std::cout << pidGain.kp << pidGain.ki << pidGain.kd << std::endl;

    pidGain.setPidGain(2.0, 3.0, 4.0);
    printf("%f, %f, %f \n", pidGain.getkp(), pidGain.getki(), pidGain.getkd());
}