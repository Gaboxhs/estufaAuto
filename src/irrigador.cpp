#include <Arduino.h>

void regar() 
{
    int umidade = analogRead(A0);

    if (umidade > 800 ) {
        Serial.print("IRRIGANDO    ");
    } else {
        Serial.print("Não é necessário irrigar a planta.    ")
    }
    Serial.print("U: "); Serial.println(umidade);
}