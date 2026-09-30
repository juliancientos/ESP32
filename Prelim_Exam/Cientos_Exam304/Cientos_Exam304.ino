//GPIO PINS
uint8_t const PIN_A = 32;
uint8_t const PIN_B = 33;
uint8_t const PIN_C = 25;
uint8_t const PIN_D = 26;
uint8_t const PIN_E = 19;
uint8_t const PIN_F = 14;
uint8_t const PIN_G = 23;
uint8_t const SW1 = 22;

bool SW1_STATE = 0;
void setup() {
  // put your setup code here, to run once:
      pinMode(SW1,INPUT);
      pinMode(PIN_A,OUTPUT);
      pinMode(PIN_B,OUTPUT);
      pinMode(PIN_C,OUTPUT);
      pinMode(PIN_D,OUTPUT);
      pinMode(PIN_E,OUTPUT);
      pinMode(PIN_F,OUTPUT);
      pinMode(PIN_G,OUTPUT);
      
  }

#include "Logic_Modes.h"
void loop() {
    SW1_STATE = digitalRead(SW1);
    if (SW1_STATE == 1) {
    count3();
    delay(1000);
    count0();
    delay(1000);
    count4();
    delay(1000);
   } else {
      en();
   }
}

