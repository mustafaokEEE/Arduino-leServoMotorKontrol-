#include <Servo.h> 
Servo servoMotor; 
void setup() 
{
  servoMotor.attach(9); 
}
void loop ()
{
  for(int val=0; val<=180; val++) 
    {
      servoMotor.write(val);
        delay(15);
    }
  for(int val2=180; val2>=0; val2--) 
    {
      servoMotor.write(val2);
        delay(15);
    }
}