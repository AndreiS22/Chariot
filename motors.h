#ifndef motors
#define motors

#include "hardware_init.h"


void set_motors(int speedLeft, int speedRight) {
  if (speedLeft > 0) {
    digitalWrite(ain1, HIGH);
    digitalWrite(ain2, LOW);
    analogWrite(pwma, speedLeft);
  } 
  else {
    digitalWrite(ain1, LOW);
    digitalWrite(ain2, HIGH);
    analogWrite(pwma, -speedLeft);
  }

  if (speedRight > 0) {
    digitalWrite(bin1, HIGH);
    digitalWrite(bin2, LOW);
    analogWrite(pwmb, speedRight);
  }
  else {
    digitalWrite(bin1, LOW);
    digitalWrite(bin2, HIGH);
    analogWrite(pwmb, -speedRight);
  }
}

#endif
