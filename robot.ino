// By BARRAGAN <http://barraganstudio.com> 
// This example code is in the public domain.


#include <Servo.h>

#include "DriveMotor.h"

int pinI1=8; //define I1 interface
int pinI2=11; //define I2 interface
int speedPin=9; //enable motor A

/*int pinI1=12; //define I3 interface*/
/*int pinI2=13; //define I4 interface*/
/*int speedPin=10; //enable motor B*/

/*int spead =127; //define the spead of motor*/

int servoControlPin = 53;

Servo turner;  // create servo object to control a servo
                // a maximum of eight servo objects can be created
DriveMotor driver;

int pos = 0;    // variable to store the servo position


void setup() {
  driver.connect(pinI1, pinI2, speedPin);
  turner.attach(53);  // attaches the servo on pin 9 to the servo object
}

void turn(int degrees) {
  turner.write(degrees - 90);
}


void loop() {
  driver.forward(100);
  delay(1000);
  driver.stop();
  driver.forward(100);
  delay(1000);
  driver.stop();

  for(pos = 180; pos>=1; pos-=1)     // goes from 180 degrees to 0 degrees
  {
    turner.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}

