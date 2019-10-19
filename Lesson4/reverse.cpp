#include <cctype>
#include <cstdio>
#include <iostream>
const int $ArraySize = 5;

int main() {

  char string[$ArraySize];

  std::cin >> string;
  size_t limit = 32;
  for (int i = 0; string[i]; ++i) {
    if (string[i] >= 65 && string[i] <= 90) {
      std::cout << char(string[i] + limit) << std::endl;

    } else if (string[i] >= 97 && string[i] <= 122) {
      std::cout << char(string[i] - limit) << std::endl;
    }
  }
  return 0;
} 