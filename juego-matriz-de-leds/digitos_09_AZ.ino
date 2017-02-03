void digito6x4(char value) {
  switch (value) {
    case '0': cero6x4(200); break;
    case '1': uno6x4(200); break;
    case '2': dos6x4(200); break;
    case '3': tres6x4(200); break;
    case '4': cuatro6x4(200); break;
    case '5': cinco6x4(200); break;
    case '6': seis6x4(200); break;
    case '7': siete6x4(200); break;
    case '8': ocho6x4(200); break;
    case '9': nueve6x4(200); break;
    default: off4094();  break;
  }
}

void nueve6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("----1---", "-1------");
    writeDigito("-----1--", "--1-----");
    writeDigito("-----1--", "---1----");
    writeDigito("---111--", "----1---");
    writeDigito("--1--1--", "-----1--");
    writeDigito("---11---", "------1-");
    writeDigito("--------", "-------1");
  }
}
void ocho6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("---11---", "-1------");
    writeDigito("--1--1--", "--1-----");
    writeDigito("--1--1--", "---1----");
    writeDigito("---11---", "----1---");
    writeDigito("--1--1--", "-----1--");
    writeDigito("---11---", "------1-");
    writeDigito("--------", "-------1");
  }
}
void siete6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("---1----", "-1------");
    writeDigito("---1----", "--1-----");
    writeDigito("---1----", "---1----");
    writeDigito("----1---", "----1---");
    writeDigito("-----1--", "-----1--");
    writeDigito("--1111--", "------1-");
    writeDigito("--------", "-------1");
  }
}
void seis6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("---11---", "-1------");
    writeDigito("--1--1--", "--1-----");
    writeDigito("--1--1--", "---1----");
    writeDigito("---11---", "----1---");
    writeDigito("--1-----", "-----1--");
    writeDigito("---111--", "------1-");
    writeDigito("--------", "-------1");
  }
}
void cinco6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("--111---", "-1------");
    writeDigito("-----1--", "--1-----");
    writeDigito("-----1--", "---1----");
    writeDigito("--111---", "----1---");
    writeDigito("--1-----", "-----1--");
    writeDigito("--1111--", "------1-");
    writeDigito("--------", "-------1");
  }
}
void cuatro6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("-----1--", "-1------");
    writeDigito("-----1--", "--1-----");
    writeDigito("--1111--", "---1----");
    writeDigito("--1--1--", "----1---");
    writeDigito("---1-1--", "-----1--");
    writeDigito("----11--", "------1-");
    writeDigito("--------", "-------1");
  }
}
void tres6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("--111---", "-1------");
    writeDigito("-----1--", "--1-----");
    writeDigito("-----1--", "---1----");
    writeDigito("---11---", "----1---");
    writeDigito("-----1--", "-----1--");
    writeDigito("--111---", "------1-");
    writeDigito("--------", "-------1");
  }
}

void dos6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("--1111--", "-1------");
    writeDigito("---1----", "--1-----");
    writeDigito("----1---", "---1----");
    writeDigito("-----1--", "----1---");
    writeDigito("--1--1--", "-----1--");
    writeDigito("---11---", "------1-");
    writeDigito("--------", "-------1");
  }
}

void uno6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("--1111--", "-1------");
    writeDigito("----1---", "--1-----");
    writeDigito("----1---", "---1----");
    writeDigito("----1---", "----1---");
    writeDigito("--1-1---", "-----1--");
    writeDigito("---11---", "------1-");
    writeDigito("--------", "-------1");
  }
}

void cero6x4(int _time) {
  for (long int i = 0; i < _time / 1; i++) {
    writeDigito("--------", "1-------");
    writeDigito("---11---", "-1------");
    writeDigito("--1--1--", "--1-----");
    writeDigito("--11-1--", "---1----");
    writeDigito("--1-11--", "----1---");
    writeDigito("--1--1--", "-----1--");
    writeDigito("---11---", "------1-");
    writeDigito("--------", "-------1");
  }
}
