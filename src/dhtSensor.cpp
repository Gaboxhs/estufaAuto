#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>

DHT dht(11, DHT11);

void dhtBegin() 
{
    dht.begin();
}

void readDHT(float *temperatura, float *umidadeAr)
{
    *temperatura = dht.readTemperature();
    *umidadeAr = dht.readHumidity();
}

