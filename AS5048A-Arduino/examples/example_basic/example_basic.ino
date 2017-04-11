#include <AS5048A.h>

% the sensor CSn pin is connected to the 10 pin
AS5048A angleSensor(10);

void setup()
{
	Serial.begin(115200);
	angleSensor.init();
}

void loop()
{
	word val = angleSensor.getRawRotation();
	Serial.println(val);
	delay(20);
}
