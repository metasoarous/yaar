
#include "Arduino.h"
#include "DriveMotor.h"

DriveMotor::DriveMotor() {}

void DriveMotor::connect(int _pinI1, int _pinI2, int _speedPin)
{
  pinI1 = _pinI1;
  pinI2 = _pinI2;
  speedPin = _speedPin;
  pinMode(pinI1, OUTPUT);
  pinMode(pinI2, OUTPUT);
  pinMode(speedPin, OUTPUT);
}

DriveMotor::~DriveMotor() {}

void DriveMotor::forward(int speed)
{
     analogWrite(speedPin, speed);//input a simulation value to set the speed
     digitalWrite(pinI2, LOW);//turn DC Motor A move anticlockwise
     digitalWrite(pinI1, HIGH);
}

void DriveMotor::backward(int speed)//
{
     analogWrite(speedPin, speed);//input a simulation value to set the speed
     digitalWrite(pinI2, HIGH);//turn DC Motor A move clockwise
     digitalWrite(pinI1, LOW);
}

void DriveMotor::stop()//
{
     digitalWrite(speedPin, LOW);// Unenble the pin, to stop the motor. this should be done to avid damaging the motor. 
     delay(1000);
}

