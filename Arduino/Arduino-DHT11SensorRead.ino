#include "DHT.h"

#define DHT11_PIN 2 //PIN 2 for DHT_11 
#define LEDPIN 12 //PIN 12 for LEDPIN

DHT dht11(DHT11_PIN, DHT11);
int warnings = 0; 

void setup() {
  Serial.begin(9600);
  dht11.begin(); //Initialization Sensor
  pinMode(LEDPIN, OUTPUT); //LEDPIN SETTING
}

void loop() {
  delay(1000); 

  float humi  = dht11.readHumidity();
  float tempC = dht11.readTemperature();
  

  
  if (isnan(humi) || isnan(tempC)) {
    Serial.println("Failed to read from DHT11 sensor!");
  } else {
    Serial.print("DHT11# Humidity: ");
    Serial.print(humi);
    Serial.print("%");

    Serial.print("  |  "); 

    Serial.print("Temperature: ");
    Serial.print(tempC);
    Serial.println("°C"); 

  
    if (tempC > 25.0) {
      digitalWrite(LEDPIN, HIGH);
        delay(2000);
       digitalWrite(LEDPIN, LOW); 
        delay(2000);
      Serial.println("Statuse LED Diode: ON");
      warrings++;
      Serial.print("Warning!! too high temperature: number of warnings ");
      Serial.println(warnings);
      
     
    } else {
      digitalWrite(LEDPIN, LOW);
      Serial.println("Status LED diode: OFF");
    }




  }
}
