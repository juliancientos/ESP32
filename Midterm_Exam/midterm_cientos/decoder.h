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

void showDigit(const int pins[], int d) {
  for (int i = 0; i < 7; i++) {
    digitalWrite(pins[i], digitPattern[d][i]);
  }
}

void displayNumber(int number) {
  showDigit(tensPins, number / 10);
  showDigit(onesPins, number % 10);
}
