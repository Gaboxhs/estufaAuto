#include <Arduino.h>
#include "dhtSensor.h"

void setup() {
  Serial.begin(9600);

  pinMode(A0, INPUT); // pino do sensor de umidade do solo
  dhtBegin(); 
}

void loop() {
  int umiSolo = analogRead(A0);

  float umiAr;
  float temp;

  
  readDHT(&temp, &umiAr)
  
  Serial.println(umiSolo); Serial.print("   ----   "); Serial.print(umiAr); Serial.print("  -  ");
  Serial.println(temp);
  
  delay(2000);

}