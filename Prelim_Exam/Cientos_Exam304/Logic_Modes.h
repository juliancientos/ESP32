void count3() {
  digitalWrite(PIN_A,1);
  digitalWrite(PIN_B,1);
  digitalWrite(PIN_C,1);
  digitalWrite(PIN_D,1);
  digitalWrite(PIN_E,0);
  digitalWrite(PIN_F,0);
  digitalWrite(PIN_G,1);
}
void count0() {
  digitalWrite(PIN_A,1);
  digitalWrite(PIN_B,1);
  digitalWrite(PIN_C,1);
  digitalWrite(PIN_D,1);
  digitalWrite(PIN_E,1);
  digitalWrite(PIN_F,1);
  digitalWrite(PIN_G,0);
}
void count4() {
  digitalWrite(PIN_A,0);
  digitalWrite(PIN_B,1);
  digitalWrite(PIN_C,1);
  digitalWrite(PIN_D,0);
  digitalWrite(PIN_E,1);
  digitalWrite(PIN_F,0);
  digitalWrite(PIN_G,1);
}
void en() {
  digitalWrite(PIN_A,0);
  digitalWrite(PIN_B,0);
  digitalWrite(PIN_C,0);
  digitalWrite(PIN_D,0);
  digitalWrite(PIN_E,0);
  digitalWrite(PIN_F,0);
  digitalWrite(PIN_G,1);
}