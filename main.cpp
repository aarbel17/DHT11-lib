#include <dht11.h>
#define pin 22
#define led 13

DHT11 DHT= DHT11(pin);

void setup() {
Serial.begin(9600);
pinMode(led,OUTPUT);
Serial.println("PROGRAMA INICIADO");
}

void loop() {

int val=DHT.encender(led);
Serial.print("LED: ");
Serial.println(val);
delay(2100);

val=DHT.apagado(led);
Serial.print("LED: ");
Serial.println(val);
delay(1500);

float temp=DHT.gettemp(pin);
Serial.print("TEMPERATURA °C: ");
Serial.println(temp);
delay(150);

float hum=DHT.gethum(pin);
Serial.print("HUMEDAD: ");
Serial.println(hum);
delay(150);

float temp_f=DHT.getfar(pin);
Serial.print("TEMPERATURA °F: ");
Serial.println(temp_f);
delay(150);

float temp_k=DHT.getK(pin);
Serial.print("TEMPERATURA K: ");
Serial.println(temp_k);
delay(150);

}
