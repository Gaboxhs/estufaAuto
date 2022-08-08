#include <Arduino.h>

#include "Usolo.h"
#include "dhtSensor.h"


void setup() {
  Serial.begin(9600);

  pinMode(A0, INPUT); // pino do sensor de umidade do solo
  dhtBegin(); 
}

void loop() {
  int umiSolo;
  float umiAr;
  float temp;
  
  read(&umiSolo);

  if (isnan(temp) || isnan(umiAr)) {
    Serial.println("Falha ao ler sensor DHT");
  }
  else {
    readDHT(&temp, &umiAr)
  }

  Serial.println(umiSolo); Serial.print("   ----   "); Serial.print(umiAr); Serial.print("  -  ");
  Serial.println(temp);
  
  delay(2000);

}