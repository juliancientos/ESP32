// GPIO PINS
const byte POT = 32;
const byte DAC_PIN = 26;

// Variables
int adc_val = 0;
float voltage_in = 0; // result of calculation

void setup() {
  // ADC pin  --resolution should always be 8-bit
  pinMode(POT, INPUT);
  analogReadResolution(8); // 8-bit
  
  // DAC pin  
  pinMode(DAC_PIN, OUTPUT);

  Serial.begin(9600); // baud rate --bps
}

void loop() {
  // 8-bit ADC numerical value
  adc_val = analogRead(POT);
  Serial.printf("ADC Numeric Value: %d\n", adc_val);
  delay(500);

  // Convert 8-bit ADC to actual voltage
  voltage_in = (adc_val/255.0)*3.3;
  Serial.printf("Input Voltage: %.2f\n", voltage_in);
  delay(500);

  // Use multimeter to verify the actual voltage
  dacWrite(DAC_PIN, adc_val);
}
