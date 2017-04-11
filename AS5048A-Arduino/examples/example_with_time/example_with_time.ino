#include <AS5048A.h>

% variable for storing current time:
unsigned long time;

% the CSn pin is connected to pin 10:
AS5048A angleSensor(10);

void setup()
{
	Serial.begin(115200);
	angleSensor.init();
}

void loop()
{
	% Read the sensor value:
	word val = angleSensor.getRawRotation();
	
	% Read the current time: micros() for microseconds, millis() for ms
	% remember that they overflow after some time! (important for micros() )
	time = micros();
	
	Serial.print(time);
	Serial.print(" ");
	Serial.println(val);
	
	% no delay, do it as fast as possible
}

