// By BARRAGAN <http://barraganstudio.com> 
// This example code is in the public domain.


#include <Servo.h>

#include "DriveMotor.h"

// Drive Motor Pins
int pinI1=8;
int pinI2=11;
int speedPin=9;

int servoControlPin = 53;

int lightSensorPin = 7;

// Initialize servo and drive motor
Servo turner;
DriveMotor driver;


// + is left, - is right
void turn(int degrees) {
  turner.write(90 - degrees);
}

int lightLevel()
{
  return analogRead(lightSensorPin);
}


// Cue arduino madness

void setup() {
  driver.connect(pinI1, pinI2, speedPin);
  turner.attach(53);  // attaches the servo on pin 9 to the servo object
  Serial.begin(9600);
}

void loop() {
  int ll = lightLevel();
  Serial.print("Light Level is: ");
  Serial.println(ll);
  turn(0);
  delay(1000);
  driver.forward(100);
  delay(1000);
  turn(45);
  delay(1000);
  turn(-45);
  driver.stop();
  driver.forward(100);
  delay(1000);
  driver.stop();
}

