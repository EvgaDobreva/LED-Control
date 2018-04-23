int LedPIN=13;

void setup() {
  pinMode(LedPIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(LedPIN, HIGH);
  delay(1500);
  digitalWrite(LedPIN, LOW);
  delay(1500);
}
