/*=========================================
                  ADC DEMO
===========================================
Description:
  This program runs on the control of a photoresistor, 
  LED's as brightness level indicator and Serial Monitor
  which also prints level of brightness 

Design Engineer:
  Julian Philip D. Cientos
  Chrischele T. Palacios

Date:
  16 September 2026
-----------------------------------------*/
//GPIO Pins
const uint8_t POT = 34;
const uint8_t LED1 = 14;
const uint8_t LED2 = 32;
const uint8_t LED3 = 33;
//PWM config
int pot_val = 0;
const int PWM_FREQ = 5000;
const byte PWM_RES = 12;

void setup() {
   pinMode(POT,INPUT);
   ledcAttach(LED1,PWM_FREQ,PWM_RES);
   ledcAttach(LED2,PWM_FREQ,PWM_RES);
   ledcAttach(LED3,PWM_FREQ,PWM_RES);
   Serial.begin(9600);
}

void loop() {
  pot_val = analogRead(POT);

  if (pot_val <= 1365 && pot_val >=0){
    ledcWrite(LED1,1000);
    ledcWrite(LED2,0);
    ledcWrite(LED3,0);
    Serial.println("Brightness: Lvl 1");
  } else if (pot_val <= 2030 && pot_val >= 1366){
    ledcWrite(LED1,0);
    ledcWrite(LED2,1000);
    ledcWrite(LED3,0);
    Serial.println("Brightness: Lvl 2");
  } else {
    ledcWrite(LED1,0);
    ledcWrite(LED2,0);
    ledcWrite(LED3,1000);
    Serial.println("Brightness: Lvl 3");
  }
  Serial.println(pot_val);
  delay(500);

  
}
