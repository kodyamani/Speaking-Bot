int Piezo = A0;
int sensorValue = 0;
int threshold = 10;

void setup() {
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(Piezo);

  Serial.println("Sensor Value: ");
  Serial.println(sensorValue);

  delay(2000);

  if (sensorValue >= threshold) {
    Serial.println("I hear you!");
    delay(1000);
  }

  delay(100);
  
}
