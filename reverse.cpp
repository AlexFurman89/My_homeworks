#include <cmath>
#include <cstdio>
#include <iostream>
#include <limits>

int main() {
  int number;

  std::cin >> number;

  int count = number;
  int reverse;

  if (count < 0) {
    printf("-");
    count *= -1;
    for (int i = 0; count; ++i) {
      reverse = count % 10;
      count = count / 10;
      printf("%d", reverse);
    }
  } else {
    for (int i = 0; count; ++i) {
      reverse = count % 10;
      count = count / 10;
      printf("%d", reverse);
    }
  }
  return 0;
}