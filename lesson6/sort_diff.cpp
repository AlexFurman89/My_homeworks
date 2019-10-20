#include <cstdio>
#include <iostream>

void printArray(double array[], int size) {
  if (array == nullptr)
    return;
  int i = 0;
  while (i < size) {
    std::cout << array[i] << ' ';
    ++i;
  }
}
void printArray(unsigned array[], int size) {
  if (array == nullptr)
    return;
  int i = 0;
  while (i < size) {
    std::cout << array[i] << ' ';
    ++i;
  }
}

void printArray(char array[], int size) {
  if (array == nullptr)
    return;
  int i = 0;
  while (i < size) {
    std::cout << array[i] << ' ';
    ++i;
  }
}

void swap(double *right, double *left) {
  if (right == nullptr || left == nullptr)
    return;
  auto temp = *right;
  *right = *left;
  *left = temp;
}

void swap(unsigned *right, unsigned *left) {
  if (right == nullptr || left == nullptr)
    return;
  auto temp = *right;
  *right = *left;
  *left = temp;
}

void swap(char *right, char *left) {
  if (right == nullptr || left == nullptr)
    return;
  auto temp = *right;
  *right = *left;
  *left = temp;
}

void bubbleSort_up(double arr[], int size) {
  if (arr == nullptr)
    return;
  auto *end = arr + size;
  for (auto *it = arr; it != end; ++it) {
    for (auto *it_next = (it + 1); it_next != end; ++it_next) {
      if (*it > *it_next) {

        swap(it, it_next);
      }
    }
  }
}

void bubbleSort_up(unsigned arr[], int size) {
  if (arr == nullptr)
    return;
  auto *end = arr + size;
  for (auto *it = arr; it != end; ++it) {
    for (auto *it_next = (it + 1); it_next != end; ++it_next) {
      if (*it > *it_next) {

        swap(it, it_next);
      }
    }
  }
}

void bubbleSort_up(char arr[], int size) {
  if (arr == nullptr)
    return;
  auto *end = arr + size;
  for (auto *it = arr; it != end; ++it) {
    for (auto *it_next = (it + 1); it_next != end; ++it_next) {
      if (*it > *it_next) {

        swap(it, it_next);
      }
    }
  }
}

int main() {
  unsigned arr[] = {1, 2, 5, 23, 6};
  int size = sizeof(arr) / sizeof(arr[0]);

  bubbleSort_up(arr, size);
  printArray(arr, size);
  return 0;
}