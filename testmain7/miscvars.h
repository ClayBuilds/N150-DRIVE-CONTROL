#ifndef MISC_VARS_H
#define MISC_VARS_H

//motor 1 controls
unsigned long m1t = 0;      //m1time
unsigned long m1tlast = 0;  //m1lasttime
int m1pwmA = 0;             //m1actual pwm
int m1pwmT = 0;             //m1target pwm
int m1adjval = 1;           //throttle adjustment value (percent)
int m1adjtime = 25;         //miliseconds between adjustments
int m1throtA = 0;            //m1 throttle in % between -100 and +100 (0 is stationary)
int m1throtT = 0;

//motor 2 controls
unsigned long m2t = 0;      //m2time
unsigned long m2tlast = 0;  //m2lasttime
int m2pwmA = 0;             //m2actual pwm
int m2pwmT = 0;             //m2target pwm
int m2adjval = 1;           //throttle adjustment value (percent)
int m2adjtime = 25;         //miliseconds between adjustments
int m2throtA = 0;            //m2 throttle in % between -100 and +100 (0 is stationary)
int m2throtT = 0;

//motor 3 controls
unsigned long m3t = 0;      //m3time
unsigned long m3tlast = 0;  //m3lasttime
int m3pwmA = 0;             //m3actual pwm
int m3pwmT = 0;             //m3target pwm
int m3adjval = 1;           //throttle adjustment value (percent)
int m3adjtime = 25;         //miliseconds between adjustments
int m3throtA = 0;            //m3 throttle in % between -100 and +100 (0 is stationary)
int m3throtT = 0;


//playstation 2 controller
int LX = 0;                 //left stick x value
int LY = 0;                 //left stick y value
int RX = 0;                 //right stick x value
int RY = 0;                 //right stick y value
byte BUTTNUMS[16] = {16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,}; //array of button presses. values of 0-15 correspond to a button being pressed, 16 is no input.
boolean haveController = false; //false if controller is not connected, true if communication established

//miscellaneous
boolean killhumans = false;  //decide whether to enter kill all humans mode
boolean selfdestruct = false;
#endif