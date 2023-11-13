#include <Thermocouple.h>
#include <MAX6675_Thermocouple.h>

#define SCK_PIN 6
#define CS_PIN 5
#define SO_PIN 4

Thermocouple* thermocouple;

void setup() {
  Serial.begin(9600);

  thermocouple = new MAX6675_Thermocouple(SCK_PIN, CS_PIN, SO_PIN);
}

void loop() {
  // Reads temperature
  const double celsius = thermocouple->readCelsius();
  // const double kelvin = thermocouple->readKelvin();
  // const double fahrenheit = thermocouple->readFahrenheit();

  // Output of information
  Serial.print("data");
  Serial.print(",");
  Serial.print(celsius);
  // Serial.print(",");
  // Serial.print(kelvin);
  // Serial.print(",");
  // Serial.print(fahrenheit);
  Serial.println("#");

  delay(500); 
}
