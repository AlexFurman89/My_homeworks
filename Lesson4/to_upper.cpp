#include <cctype>
#include <cstdio>
#include <iostream>
const int $A = 5;

int main() {

  char string[$A];

  std::cin >> string;
  for (int i = 0; string[i]; ++i) {
    if (string[i] >= 97 && string[i] <= 122) {
      std::cout << char(string[i] - 32) << std::endl;
    } else {
      std::cout << string[i] << std::endl;
    }
  }
  return 0;
}