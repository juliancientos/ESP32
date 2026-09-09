int order[] = {32, 33, 25, 14, 27, 26};

void allOff(){
  for (int i=0; i<NUM_PINS; i++){
    digitalWrite(LED[i], 0);
  }
}

void blink(){
  for (int i=0; i<NUM_PINS; i++){
    digitalWrite(LED[i], 1);
  }
  delay(500);

  for (int i=0; i<NUM_PINS; i++){
    digitalWrite(LED[i], 0);
  }
  delay(500);
}

void alt(){
  for (int i=0 ; i<3 ; i++) {
  digitalWrite(LED[i], 1);
  }
  delay(500);
  
  for (int i=3 ; i<=5 ; i++) {
  digitalWrite(LED[i], 1);
  }
  delay(500);
  return;
}
void run(){
  for (int i=0; i<NUM_PINS; i++){
    digitalWrite(order[i], 1);
    delay(500);
    digitalWrite(order[i], 0);
  }

  for (int i=NUM_PINS-2; i>=0; i--){
    digitalWrite(order[i], 1);
    delay(500);
    digitalWrite(order[i], 0);
  }
}