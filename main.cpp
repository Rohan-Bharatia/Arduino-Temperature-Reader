const int sensPin = A0;
const int potPin = A1;
const float baselineTempCelcius = 20.0;
const float baselineTempFahrenheit = 68.0;
const float baselineTempKelvin = 293.15;

void setup()
{
  Serial.begin(9600);

  for(int ledPin = 0; ledPin < 6; ledPin++)
  {
    pinMode(ledPin, OUTPUT);
    digitalWrite(ledPin, LOW);
  }
  pinMode(potPin, INPUT);
}

void printTemps(int potVal, float tempCelsius, float tempFahrenheit, float tempKelvin)
{
  if(potVal == 0)
  {
    Serial.print("Temperature: ");
    Serial.print(tempCelsius);
    Serial.print("° Celsius");
    Serial.println();
  } else if(potVal == 1)
  {
    Serial.print("Temperature: ");
    Serial.print(tempFahrenheit);
    Serial.print("° Fahrenheit");
    Serial.println();
  } else if(potVal == 2)
  {
    Serial.print("Temperature: ");
    Serial.print(tempKelvin);
    Serial.print("° Kelvin");
    Serial.println();
  } else
  {
    Serial.println("Error: Temperature Type Not Found");
  }
}

void loop()
{
  int potVal = analogRead(potPin);
  int sensVal = analogRead(sensVal);

  potVal = map(potVal, 0, 1023, 0, 2);
  potVal = constrain(potVal, 0, 2);
}
