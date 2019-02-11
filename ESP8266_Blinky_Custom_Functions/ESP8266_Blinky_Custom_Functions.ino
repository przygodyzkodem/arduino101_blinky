void setup() {
  pinMode(D4, OUTPUT);
}

void loop() {
  turnOnLed(500);                 
  turnOffLed(2000);
  turnOnLed(2000);
  turnOffLed(500); 
}

void turnOnLed(int delayTime) {
  digitalWrite(D4, HIGH); 
  delay(delayTime); 
}

void turnOffLed(int delayTime) {
  digitalWrite(D4, LOW);
  delay(delayTime);
}
