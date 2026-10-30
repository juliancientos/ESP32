const int IR_ADD = 2;      // IR sensor 1: count +1
const int IR_SUB = 23;     // IR sensor 2: count -1
const int RESET_BTN = 22;  // button (other leg to GND)

const int onesPins[7] = {32, 33, 25, 26, 27, 14, 13}; // 7 segment pins (a-g)
const int tensPins[7] = {15, 19, 4, 16, 17, 5, 18};   // 7 segment pins (a-g)

int count = 0;

// previous readings (to detect the moment something changes)
int lastAdd, lastSub, lastBtn;

#include "decoder.h"

void setup() {
  // INPUT_PULLUP keeps the pins HIGH when nothing is connected,
  // so they don't pick up noise and count by themselves
  pinMode(IR_ADD, INPUT_PULLUP);
  pinMode(IR_SUB, INPUT_PULLUP);
  pinMode(RESET_BTN, INPUT_PULLUP);

  for (int i = 0; i < 7; i++) {
    pinMode(onesPins[i], OUTPUT);
    pinMode(tensPins[i], OUTPUT);
  }

  lastAdd = digitalRead(IR_ADD);
  lastSub = digitalRead(IR_SUB);
  lastBtn = digitalRead(RESET_BTN);

  displayNumber(0);
}

void loop() {
  int add = digitalRead(IR_ADD);
  int sub = digitalRead(IR_SUB);
  int btn = digitalRead(RESET_BTN);

  // IR sensor 1 just detected something -> add
  if (add == LOW && lastAdd == HIGH) {
    if (count < 99) count++;
    displayNumber(count);
    delay(100);
  }

  // IR sensor 2 just detected something -> subtract
  if (sub == LOW && lastSub == HIGH) {
    if (count > 0) count--;
    displayNumber(count);
    delay(100);
  }

  // Button just pressed -> reset
  if (btn == LOW && lastBtn == HIGH) {
    count = 1;
    displayNumber(count);
  }

  lastAdd = add;
  lastSub = sub;
  lastBtn = btn;

  delay(50);   // small delay to avoid false triggers
}