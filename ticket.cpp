#include <cstdio>
#include <iostream>

const size_t SIZE = 6;

int bit;

int main() {
  int rest = 0;
  int rest2 = 0;
  int a = bit;

  scanf("%d", &bit);
  if ( bit <= SIZE) {

  for (size_t i = 1; i <= SIZE; ++i) {
    size_t half_Row = SIZE / 2;
    if (i <= half_Row) {
      rest = rest + (a % 10);
      a = a / 10;
    } else if (i > half_Row) {

      rest += (a % 10);
      a = a / 10;
    }
  }
  }
  printf((rest == rest2) ? "yes\n" : "no\n");
  return 0;
}
