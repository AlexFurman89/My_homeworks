#include <iostream>
int main() {
  int n;
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++)
      {std::cout << ' ';}
    for (int k = n; k >= n - (2 * i); k--)
      std::cout << '*';
    std::cout << std::endl;
  }
  return 0;
}
