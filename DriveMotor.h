
#ifndef DriveMotor_h
#define DriveMotor_h

/*int pinI1=12; //define I3 interface*/
/*int pinI2=13; //define I4 interface*/
/*int speedPin=10; //enable motor B*/

/*int spead =127; //define the spead of motor*/

class DriveMotor {
  private:
    int pinI1;
    int pinI2;
    int speedPin;

  public:
    //DriveMotor(int pinI1, int pinI2, int speedPin);
    DriveMotor();
    ~DriveMotor();
    void connect(int _pinI1, int _pinI2, int _speedPin);
    void forward(int speed);
    void backward(int speed);
    void stop();
};

#endif

