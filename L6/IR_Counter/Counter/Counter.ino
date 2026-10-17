// Pins
const int OUT = 2;                                    // IR sensor pin
const int onesPins[7] = {32, 33, 25, 26, 27, 14, 13}; // 7 segment pins (a-g)
const int tensPins[7] = {15, 19, 4, 16, 17, 5, 18};   // 7 segment pins (a-g)

// Initialize to zero
int Number_of_Object = 0;   // Counter for objects
int SensorState = 0;        // Current sensor reading
int lastSensorState = HIGH; // Previous sensor reading to track state changes

#include "decoder.h"

void setup() {
  pinMode(OUT, INPUT);

  for (int i = 0; i < 7; i++) {
    pinMode(onesPins[i], OUTPUT);
    pinMode(tensPins[i], OUTPUT);
  }

  displayNumber(0);   // starts the process by showing 00
}

void loop() {
  SensorState = digitalRead(OUT);

  if (SensorState == LOW && lastSensorState == HIGH) {
    Number_of_Object++;
    if (Number_of_Object > 99) Number_of_Object = 0;  // 2-digit display only
    displayNumber(Number_of_Object);
    delay(100);
  }

  lastSensorState = SensorState;
} 