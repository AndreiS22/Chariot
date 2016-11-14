#ifndef citire_snz
#define citire_snz

#include "hardware_init.h"
#include "motors.h"
#include "turbina.h"

void citire(){
  s1 = digitalRead(12);
  s2 = analogRead(A7);
  s3 = analogRead(A6);
  s4 = analogRead(A5);
  s5 = analogRead(A4);
  s6 = analogRead(A3);
  s7 = analogRead(A2);
  s8 = analogRead(A1);
  s9 = analogRead(A0);
  s10 = digitalRead(2);
}
void citire_senzori(){
 
  citire();
  Serial.print(s1);
  Serial.print("    ");
  Serial.print(s2);
  Serial.print("    ");
  Serial.print(s3);
  Serial.print("    ");
  Serial.print(s4);
  Serial.print("    ");
  Serial.print(s5);
  Serial.print("    ");
  Serial.print(s6);
  Serial.print("    ");
  Serial.print(s7);
  Serial.print("    ");
  Serial.print(s8);
  Serial.print("    ");
  Serial.print(s9);
  Serial.print("    ");
  Serial.println(s10);

}

void wait_for_start() {

  while(start == 0){
       start = digitalRead(telecom);
  }

}

void wait_for_stop(){
  start = digitalRead(telecom);
  while(start == 0){
      set_motors(0, 0);
      changeThrottle(0);
  }
    
}

#endif 

