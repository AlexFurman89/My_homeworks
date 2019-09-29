#include <cstdio>
#include <iostream>
#include <limits>

#define SIZE 5

int main() {

  int summ = 0;

  for (int i = 0; i < SIZE; ++i) {
    int digits;
    std::cin >> digits;
    if (digits < -60 || digits > 90) {
      --i;
      std::cout << "You should enter digits from -60 to 90\n";
      summ -= digits;
    }
    if ((digits % 2) != 0) {
      summ += digits;
    }
  }
  std::cout << summ;
  return 0;
}