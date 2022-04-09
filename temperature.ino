// This #include statement was automatically added by the Particle IDE.
#include <Adafruit_DHT_Particle.h>

//This identifies the primary pin output to be read by the DHT sensor
#define DHTPIN D5    

//Defines what the type of the DHT sensor we are using is.
#define DHTTYPE DHT11        

DHT dht(DHTPIN, DHTTYPE);
void setup() {
    pinMode(D7,OUTPUT);
    dht.begin();
}

void loop() {
    delay(2000);
    int i = 0;
    float temp = dht.getTempCelcius();
    Particle.publish("temp", String(temp));
    delay(15000);
}