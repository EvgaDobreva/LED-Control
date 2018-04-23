int X_PIN=A0;
int Y_PIN=A1;

int joystick_x=0;
int joystick_y=0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  joystick_x=analogRead(X_PIN);
  joystick_y=analogRead(Y_PIN);

  Serial.print("x=");
  Serial.print(joystick_x);
  Serial.print(", y=");
  Serial.print(joystick_y);
  Serial.print("\n");
  delay(2000);
}
