#include <cctype>
#include <cstdio>
#include <iostream>
const unsigned  $ArraySize = 5;

int main() {

  char string[$ArraySize];

  std::cin >> string;

  for (unsigned i = 0; string[i]; ++i) {
    if (string[i] == ' ')
      break;
    if (string[i] >= 48 && string[i] <= 57)
      std::cout << string[i] << "\n";
  }

  return 0;
}
