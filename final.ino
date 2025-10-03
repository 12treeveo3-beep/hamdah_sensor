// C++ code
//
#include <Servo.h>

Servo servo_8;

void setup()
{
  servo_8.attach(8, 500, 2500);
}

void loop()
{
  servo_8.write(90);
  delay(1000); // Wait for 1000 millisecond(s)
  servo_8.write(180);
  delay(1000); // Wait for 1000 millisecond(s)
  servo_8.write(320);
  delay(1000); // Wait for 1000 millisecond(s)
}