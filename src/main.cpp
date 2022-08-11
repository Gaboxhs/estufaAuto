#include <Arduino.h>

#include "dhtSensor.h"
#include "irrigador.h"

void setup() {
  Serial.begin(9600);

  pinMode(A0, INPUT); // pino do sensor de umidade do solo
  dhtBegin(); 
}

void loop() {
  float umiAr;
  float temp;

  regar();
  readDHT(&temp, &umiAr)
  
  
  Serial.print(umiAr); Serial.print("  -  "); Serial.println(temp);
  
  delay(2000);

}