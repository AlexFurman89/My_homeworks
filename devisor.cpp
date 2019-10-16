#include <cstdio>
#include <iostream>
#include <limits>

int main() {

  int dividend;
  int devisor;

  std::cout << "Enter dividend\n";
  std::cin >> dividend;

  devisor = dividend / 2;
  for (int i = devisor; i > 0; --i) {
    if (dividend % i == 0) {
      std::cout << i << "\n";
      return 0;
    }
  }

  return 0;
}
