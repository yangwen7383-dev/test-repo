#include <Arduino.h>
#include <VescUart.h>

VescUart VescMotor;

void setup() {
  Serial.begin(115200);
  VescMotor.setSerialPort(&Serial);
}

void loop() {
  // put your main code here, to run repeatedly:
  VescMotor.setDuty(0.3); // Set the duty cycle to 30%
  delay(1000); // Wait for 1 second
  VescMotor.setDuty(0.0); // Set the duty cycle to 0%
  delay(1000); // Wait for 1 second
  delay(1000); // Wait for 1 second
}
//blablabla