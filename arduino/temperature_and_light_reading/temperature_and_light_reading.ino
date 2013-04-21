const int temperaturePin = 0;
const int photoSensorPin = 1;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  float lightLevel = analogRead(photoSensorPin);

  float voltage = getVoltage(temperaturePin);
  float degreesC = (voltage - 0.5) * 100.0;
  
  Serial.print(lightLevel);
  Serial.print(";");
  Serial.print(degreesC);
  Serial.println();
  
  delay(1000);
}

float getVoltage(int pin)
{
  return (analogRead(pin) * 0.004882814);
}

