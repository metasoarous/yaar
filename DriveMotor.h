
#ifndef DriveMotor_h
#define DriveMotor_h

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

