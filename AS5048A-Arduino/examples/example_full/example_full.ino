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
	
	Serial.print("Rotation: ");
	Serial.println(val);
	
	Serial.print("State: ");
	angleSensor.printState();
	
	Serial.print("Errors: ");
	Serial.println(angleSensor.getErrors());
	
	delay(1000);
}
