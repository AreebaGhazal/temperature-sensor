# include "DHT.h"
# define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("dht11 TEST!");
  dht.begin();
}
void loop() {
  // put your main code here, to run repeatedly:
  delay(2000);
  // Read temperture as celsius (the default)
  float t_c = dht.readTemperature();
  
  Serial.println("Temperature: ");
  Serial.print(t_c);
  Serial.print("C");
 
}
