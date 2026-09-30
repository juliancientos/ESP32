/*===========================================================
                      PWM DEMO 
============================================================
Description: 

Programmer: 
  Julian Philip D. Cientos  
  Chrischele Palacios

Date: 
  9 Sept 2026

----------------------------------------------------------*/ 
// GPIOs
 // GPIOs
const uint8_t LED = 32; // pin no.

// PWM parameters
const uint16_t FREQ = 5000; 
const uint8_t RES = 8;
int bright = 0;
int t_delay = 10;
int fade = 5;

void setup() {
  // put your setup code here, to run once:
  ledcAttach(LED, FREQ, RES);
}

void loop() {

  /* for(; bright<255; bright+=5) {
    ledcWrite(LED, bright);
    delay(10);
  }

  for(; bright>0; bright-=5) {
    ledcWrite(LED, bright);
    delay(10);
  } */

  ledcWrite(LED, bright);
  bright += fade;

  if(bright >= 255 || bright <= 0) {
    fade = -fade; 
  }

  delay(10);
}
