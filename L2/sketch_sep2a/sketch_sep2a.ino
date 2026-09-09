/*===========================================================
                      DIGITAL OUTPUT
============================================================
Description:
  This program blinks an LED connecten to GPI032 with 
  a 1-second interval
  
Programmer:
  Julian Philip D. Cientos
  Chrischele T. Palacios
  
Date:
  2 September 2026
-----------------------------------------------------------  */

// GPIOS
  uint8_t const LED[] = {32,33,25,26,27,14};
  uint8_t const NUM_PINS = sizeof(LED)/sizeof(LED[0]);

  int SW1 = 18;
  int SW2 = 19;

void setup() {
  for (int i=0 ; i<NUM_PINS; i++){
    pinMode(LED[i], OUTPUT);
  }
  pinMode(SW1, INPUT_PULLUP);
  pinMode(SW2, INPUT_PULLUP);
}
#include "LED_Modes.h"

void loop() {
  bool sw1 = !digitalRead(SW1);
  bool sw2 = !digitalRead(SW2);

  if (sw1 && sw2) {
    run();
  }

  else if (sw2) {
    blink();
  }

  else if (sw1) {
    alt();
  }

  else{
    allOff();
  }
}