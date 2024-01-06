//test program for attempting to control N150 robot
// 12-31-2023
//version 7

//changes from v6:
/*
-map ps2 controller to motor driver pwm outputs
*/

//test results:
/*
- worked beautifully as intended
-ran nicely on actual robot.
*/

#include "pinout.h"
#include "miscvars.h"
#include "motorcontrol.h"
#include "ps2.h"
#include "miscfuncs.h"



void setup() 
{
  //set all pins for drive control to output
  pinMode(m1dirpin, OUTPUT);
  pinMode(m1pwmpin, OUTPUT);
  pinMode(m1clpin, OUTPUT);
  pinMode(m2dirpin, OUTPUT);
  pinMode(m2pwmpin, OUTPUT);
  pinMode(m2clpin, OUTPUT);
  pinMode(m3dirpin, OUTPUT);
  pinMode(m3pwmpin, OUTPUT);
  pinMode(m3clpin, OUTPUT);
  
  //initialize the enable pins
  digitalWrite(m1clpin, HIGH);
  digitalWrite(m2clpin, HIGH);
  digitalWrite(m3clpin, HIGH);
  
  //ps2 controller stuff
  fastPinMode (PIN_BUTTONPRESS, OUTPUT);
	fastPinMode (PIN_HAVECONTROLLER, OUTPUT);
	delay (300);
	Serial.begin (115200);
	Serial.println (F("Ready!"));
  
  
}

void loop() 
{
  checkcontroller();
  controller();
  mapTargets();

  adjustmotor1(m1throtT);
  adjustmotor2(m2throtT);
  adjustmotor3(m3throtT);
  
  //printcontroller();
  //printbuts();
  //printmotvals();
  
}

