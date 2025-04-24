#include "PidGain.h"
#include "stdio.h"
#include <iostream>

using namespace std;

int main(void)
{
    PidGain pidGain(10.0, 20.0, 30.0);
    printf("%f, %f, %f\n", pidGain.getKp(), pidGain.getKi(), pidGain.getKd());
    // cout << pidGain.kp << pidGain.ki << pidGain.kd << endl;

    pidGain.setPidGain(5.0, 2.5, 1.0);
    printf("after: %f, %f, %f\n", pidGain.getKp(), pidGain.getKi(), pidGain.getKd());
}