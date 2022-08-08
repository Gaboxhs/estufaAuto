#include <Arduino.h>

void read(int *sensorData) 
{
  *sensorData = analogRead(A0);
}