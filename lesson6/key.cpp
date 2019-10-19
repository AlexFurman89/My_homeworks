#include <iostream>

int main() {
  int size_cod;
  int size_dec;

  char string_before[10];
  char string_after[10];

  std::cout << "Enter string_before for coding:" << std::endl;
  std::cin >> string_before;
  std::cout << "Enter size of the table:" << std::endl;
  std::cin >> size_cod;

  int count = 0;
  for (size_t index = 0; string_before[index]; ++index)
    count += 1;

  size_t j = 0;
  size_t index = 0;
  for (size_t i = 0; i < size_cod; ++i) {
    for (; j < count;) {
      std::cout << string_before[j];
      string_after[index] = string_before[j];
      j += size_cod;
      ++index;
    }
    j = i + 1;
  }

  std::cout << '\n' << "Enter size for decoding:" << std::endl;
  std::cin >> size_dec;

  size_t k = 0;
  for (size_t i = 0; i < size_dec; ++i) {
    for (; k < count;) {
      std::cout << string_after[k];
      k += size_dec;
    }
    k = i + 1;
  }
  std::cout << '\n';
  return 0;
}