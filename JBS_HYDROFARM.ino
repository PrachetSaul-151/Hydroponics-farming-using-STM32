#include <DHT.h>
#define DHTPIN PA10
#define RELAY_PIN PA8 // Wate
#define DHTTYPE DHT11
int pH_Value; 
float Voltage;
DHT dht(DHTPIN, DHTTYPE);
void setup(){
  Serial.begin(9600);
  pinMode(pH_Value, INPUT); 
  pinMode(RELAY_PIN, OUTPUT); 
  Serial.println("--IOT HYDROFARM TEST--");
  dht.begin();
  }

void loop(){
  float h = dht.readHumidity();
// Read temperature as Celsius (the default)
float t = dht.readTemperature();
// Read temperature as Fahrenheit (isFahrenheit = true)
float f = dht.readTemperature(true);
 //humi = HT.readHumidity();
 //tempC = HT.readTemperature();
 //tempF = HT.readTemperature(true);
 if (isnan(h) || isnan(t) || isnan(f)) {
     Serial.println(F("Failed to read from DHT sensor!"));
     return;
 }
 // Compute heat index in Fahrenheit (the default)
//float hif = HT.computeHeatIndex(f, h);
// Compute heat index in Celsius (isFahreheit = false)
//float hic = HT.computeHeatIndex(t, h, false);
Serial.print(" Humidity: ");
Serial.print(h);
Serial.print(" %\t");
Serial.print("Temperature: ");
Serial.print(t);
Serial.print("°C ");
Serial.print(f);
Serial.print("°F\t" );
Serial.println(" ");
pH_Value = analogRead(PA0); 
Voltage = pH_Value * (5.0 / 1023.0); 
Serial.print("PH : ");
Serial.println(Voltage); 
digitalWrite(RELAY_PIN, HIGH); // Set pin HIGH
Serial.println("The Water Pump is ON!");
delay(100);// Wait 3 seconds
}
while(1){
digitalWrite(RELAY_PIN, LOW); // Set pin LOW
Serial.println("The Water Pump is OFF!");
delay(100); // Wait 3 seconds*/
delay(1000);
}

  
