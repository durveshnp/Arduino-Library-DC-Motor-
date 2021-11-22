#include "my_library.h"

DCMotor::DCMotor(byte pin1,byte pin2,int speed)
{
	this->pin1 = pin1;
	this->pin2 = pin2;
	this->speed = speed;
}

DCMotor::clockwise()
{
	analogWrite(pin1, speed);
  	analogWrite(pin2, 0);
}

DCMotor::antiClockwise()
{
	analogWrite(pin1, 0);
  	analogWrite(pin2, speed);
}

DCMotor::stop()
{
	analogWrite(pin1, 0);
  	analogWrite(pin2, 0);
}

DCMotor::motorDelay()
{
	delay(1000);
}


