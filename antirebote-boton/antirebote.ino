int btnRead(int pinBtn, int* sAnterior) {
  int rta = LOW;
  int sActual = digitalRead(pinBtn);
  if ( sActual == 1 && *sAnterior == 0 ) {
    rta = HIGH;
    *sAnterior = 1;
  } else if (sActual == 1 && *sAnterior == 1) {
    rta = LOW;
  }
  if (sActual == 0) {
    rta = LOW;
    *sAnterior = 0;
  }
  return rta;
}
