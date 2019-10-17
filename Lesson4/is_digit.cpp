#include <cctype>
#include <cstdio>
#include <iostream>
const int $A = 5;

int main() {

  char string[$A];

  std::cin >> string;

  for (int i = 0; string[i]; ++i) {
    if (string[i] == ' ')
      break;
    if (string[i] >= 48 && string[i] <= 57)
      std::cout << string[i] << "\n";
  }

  return 0;
}