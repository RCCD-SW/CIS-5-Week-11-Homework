#include <iostream>

// Practice 11 — Your Name
// CIS 5 Week 11 · Normalize + pointer read

void clamp(int& x, int lo, int hi) {
  // TODO: if x < lo → lo; if x > hi → hi
}

int main() {
  int score = 140;
  std::cout << "Score before: " << score << "\n";
  clamp(score, 0, 100);
  std::cout << "Score after: " << score << "\n";

  int* p = &score;
  // TODO: print *p labeled "Via pointer"
  return 0;
}
