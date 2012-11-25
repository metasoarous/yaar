// By BARRAGAN <http://barraganstudio.com> 
// This example code is in the public domain.


#include <Servo.h>

#include "drive_motor.h"


int servoControlPin = 53;

Servo turner;  // create servo object to control a servo
                // a maximum of eight servo objects can be created


int pos = 0;    // variable to store the servo position


void setup() {
  turner.attach(53);  // attaches the servo on pin 9 to the servo object
  setup_drive_motor();
}

void turn(int degrees) {
  turner.write(degrees - 90);
}


void loop() {
  turner.write(pos);
  for(pos = 0; pos < 180; pos += 1)  // goes from 0 degrees to 180 degrees
  {                                  // in steps of 1 degree
    turner.write(pos);              // tell servo to go to position in variable 'pos'
    delay(150);                       // waits 15ms for the servo to reach the position
  }

  turn(0);

  left();
  delay(2000);
  stop();
  right();
  delay(2000);
  stop();
  delay(2000);

  for(pos = 180; pos>=1; pos-=1)     // goes from 180 degrees to 0 degrees
  {
    turner.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}

