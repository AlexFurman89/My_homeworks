#include <cstdio>
#include <iostream>

unsigned bit = 12;

int main(int argc, char const *argv[]) {
  unsigned number = bit;

  size_t count = 0;
  while (number != 0) {
    count += number & 1;
    number >>= 1;
  }

  printf("Bit set in number %d is %zd\n", bit, count);
  return 0;
}