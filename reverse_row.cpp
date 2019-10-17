#include <cctype>
#include <cstdio>
#include <iostream>

size_t SIZE = 20;

int main() {
  char string[SIZE];

  std::cin >> string;
  size_t count = 0;

  for (; string[count]; ++count);

  for (size_t length = count - 1; (string[length]) >= 0; --length) {
    std::cout << string[length];
  }
  return 0;
}
