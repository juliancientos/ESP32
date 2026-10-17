// Which segments are on for each digit (a b c d e f g)
const byte digitPattern[10][7] = {
  {1,1,1,1,1,1,0}, // 0
  {0,1,1,0,0,0,0}, // 1
  {1,1,0,1,1,0,1}, // 2
  {1,1,1,1,0,0,1}, // 3
  {0,1,1,0,0,1,1}, // 4
  {1,0,1,1,0,1,1}, // 5
  {1,0,1,1,1,1,1}, // 6
  {1,1,1,0,0,0,0}, // 7
  {1,1,1,1,1,1,1}, // 8
  {1,1,1,1,0,1,1}  // 9
};

// Write one digit to one display
void showDigit(const int pins[], int d) {
  for (int i = 0; i < 7; i++) {
    digitalWrite(pins[i], digitPattern[d][i]);
  }
}

// Split the number and send each digit to its display
void displayNumber(int number) {
  int tensDigit = (number / 10) % 10;  // drops last digit
  int onesDigit = number % 10;         // keeps last digit

  showDigit(tensPins, tensDigit);
  showDigit(onesPins, onesDigit);
}