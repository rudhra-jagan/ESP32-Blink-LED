int ledPin = 4;   // change if needed

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);

  Serial.println("System Started");
}

void loop() {

  // LED ON
  digitalWrite(ledPin, HIGH);
  Serial.println("LED ON");
  delay(1000);

  // LED OFF
  digitalWrite(ledPin, LOW);
  Serial.println("LED OFF");
  delay(1000);
}