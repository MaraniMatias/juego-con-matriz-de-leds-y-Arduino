void precentacion() {
  cruz(200, true);
  for (int i = 58; i >= 48; i--) {
    digito6x4(i);
  }
  cruz(100, false);
  off4094();      delay(100);
}

void cruz(int _time, bool sent) {
  if (sent) {
    writeDigito("10000001", "10000001"); delay(_time);
    writeDigito("01000010", "01000010"); delay(_time);
    writeDigito("00100100", "00100100"); delay(_time);
    writeDigito("00011000", "00011000"); delay(_time);
  } else {
    writeDigito("00011000", "00011000"); delay(_time);
    writeDigito("00100100", "00100100"); delay(_time);
    writeDigito("01000010", "01000010"); delay(_time);
    writeDigito("10000001", "10000001"); delay(_time);
  }
}

void setCountUp() {
  digitalWrite(pinUpDownContador, HIGH);
  digitalWrite(pinUpDownContador, LOW);
  digitalWrite(pinUpDownContador, HIGH);
}
void setCountDown() {
  digitalWrite(pinUpDownContador, LOW);
  digitalWrite(pinUpDownContador, HIGH);
  digitalWrite(pinUpDownContador, LOW);
}
void updateCount() {
  digitalWrite(pinClockContador, LOW);
  digitalWrite(pinClockContador, HIGH);
}
void resetCount() {
  digitalWrite(pinResetContador, LOW);
  digitalWrite(pinResetContador, HIGH);
  digitalWrite(pinResetContador, LOW);
}
