int pinBtn = 8;
int btnStadoAnterior = 0; // I keep the previous button state

void setup() {
  pinMode(pinBtn, OUTPUT);
}

void loop() {
  int btnArdu = digitalRead(pinBtn);
  int btn = btnRead(pinBtn, &btnStadoAnterior); // Very important the sign &
  Serial.print(btnArdu);
  Serial.print(" ~ ");
  Serial.println(btn);
  delay(100); // Just so you can see. Solo para ver los valores
}
