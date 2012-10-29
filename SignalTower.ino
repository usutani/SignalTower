int LED_PIN = 13;

void setup() {
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int incomingByte = 0;
  if (Serial.available() > 0) {
    incomingByte = Serial.read();
    Serial.print("Received: ");
    Serial.println(incomingByte);
    int ledBlinkTime = (incomingByte - 48) * 1000;
    digitalWrite(LED_PIN, HIGH);
    delay(ledBlinkTime);
    digitalWrite(LED_PIN, LOW);
    delay(1000);
  }
}
