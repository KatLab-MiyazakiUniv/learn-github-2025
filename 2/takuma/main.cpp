#include "PidGain.h"
#include "stdio.h"
#include <iostream>

int main(void) {
      PidGain pidGain(10.0, 20.0, 30.0);
      printf("before: %f, %f, %f \n", pidGain.getKp(), pidGain.getKi(), pidGain.getKd());
      // std::cout << pidGain.kp << pidGain.ki << pidGain.kd << std::endl;

      pidGain.setPidGain(5.0, 2.5, 1.0);
      printf("after: %f, %f, %f \n", pidGain.getKp(), pidGain.getKi(), pidGain.getKd());
}