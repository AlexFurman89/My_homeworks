#include <cstdio>
#include <iostream>

#define SIZE 6

int bit = 121042;

int main() {
  int rest = 0;
  int rest2 = 0;
  int a = bit;

  for (int i = 1; i <= SIZE; ++i) {
    if (i <= SIZE / 2) {
      rest = rest + (a % 10);
      a = a / 10;
    } else if (i > SIZE / 2) {

      rest2 = rest2 + (a % 10);
      a = a / 10;
    }
  }
  printf((rest == rest2) ? "yes\n" : "no\n");
  return 0;
}
