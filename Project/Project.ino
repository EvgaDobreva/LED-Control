int LedPIN=13;
int JoyX_PIN=A0;
int JoyY_PIN=A1;

int JoyX=0;
int JoyY=0;

void setup() {
  pinMode(LedPIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  JoyX=analogRead(JoyX_PIN);
  JoyY=analogRead(JoyY_PIN);
  Serial.print("\n X=");
  Serial.print(JoyX);
  Serial.print(", Y=");
  Serial.print(JoyY);

  if ((JoyX >= 0 && JoyX <= 1023) && JoyY == 0) {
    digitalWrite(LedPIN, HIGH);
  }
  else if ((JoyX >= 0 && JoyX <= 1023) && JoyY == 1023) {
    digitalWrite(LedPIN, LOW);
  }
  delay(500);
}
