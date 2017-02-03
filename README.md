# juego-con-matriz-de-leds-y-Arduino.
Este juego lo arme para probar la matriz de 8x8 leds controlada con dos 4094 conectados en cascada, permite controlar 64 leds con solo tres pines de Arduino.
El juego consiste en evitar que los ateroides (un led) coche la nave (3 leds en  la parte inferior de la matriz), puede dispara para destruirlos los asteroides.
Con dos botones uno para la derecha y otro la izquierda, con los dos juntos dispara.

# Código Anti-Rebote o Debounce.
Es para evitar que al tener presionado el botón la nave se mueva más de un lugar.

Función anti-rebote
```c++
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
```

## Ejemplo programa usando la función.
Para leer el valor real del botón usamos **btnRead**

```c++
int pinBtn = 8;
int btnStadoAnterior = 0; // I keep the previous button state

void setup() {
 pinMode(pinBtn, OUTPUT)
}

void loop() {
  int btnArdu = digitalRead(pinBtn);
  int btn = btnRead(pinBtn, &btnStadoAnterior); // Very important the sign &
  Serial.print(btnArdu);
  Serial.print(" ~ ");
  Serial.println(btn);
}
```

| digitalRead | btnRead |
| :---------- | :------ |
|      0      |    0    |
|      1      |    1    |
|      1      |    0    |
|      1      |    0    |
|      0      |    0    |
|      1      |    1    |
