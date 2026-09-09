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
  const uint8_t SW1 = 32;
  const uint8_t SW2 = 33;

  bool SW1_state = 0
  bool SW2_state = 0
//PWM Parameters
const uint16_t FREQ   = 5000;
const uint8_t   RES   = 8;
int            bright = 0;
int           t_delay = 10;
int           fade    = 5;

void setup() { 
 pinMode(SW1,INPUT);
 pinMode(SW1,INPUT);
}

void loop() {
    SW1_state = digitalRead(SW1;)
}
