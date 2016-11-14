#ifndef hardware_init
#define hardware_init

#include "Servo.h"
#include "Arduino.h"


Servo esc;
int minPulseRate = 1000;
int maxPulseRate = 2000;


#define escPin 11
#define pwmb 3
#define bin1 4
#define bin2 5
#define pwma 6
#define ain1 7
#define ain2 8
#define telecom 10



int s1;
int s2;
int s3;
int s4;
int s5;
int s6;
int s7;
int s8;
int s9;
int s10;
uint8_t start = 0;



 void hardwareInit() {
  
  pinMode(pwma,OUTPUT);
  pinMode(ain1,OUTPUT);
  pinMode(ain2,OUTPUT);
  pinMode(pwmb,OUTPUT);
  pinMode(bin1,OUTPUT);
  pinMode(bin2,OUTPUT);
  pinMode(telecom, INPUT); 
  pinMode(s1, INPUT);
  pinMode(s10, INPUT);

  Serial.begin(9600);
  Serial.setTimeout(500);


  esc.attach(escPin, minPulseRate, maxPulseRate); 
  esc.write(0);
 
 }
 
 #endif
