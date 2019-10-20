#include <cstdio>
#include <iostream>

void printArray(int array[], int size) {
  int i = 0;
  while (i < size) {
    std::cout << array[i] << ' ';
    ++i;
  }
}

void swap(int *right, int *left) {
  // if (right == nullptr || left ==nullptr ) return;
  int temp = *right;
  *right = *left;
  *left = temp;
}

void bubbleSort_up(int arr[], int size) {
  int *end = arr + size;
  for (int *it = arr; it != end; ++it) {
    for (int *it_next = (it + 1); it_next != end; ++it_next) {
      if (*it > *it_next) {

        swap(it, it_next);
        int temp = *it_next;
        // *it_next = *it;
        // *it = temp;
      }
    }
  }
}

void bubbleSort_down(int arr[], int size) {
  int *end = arr + size;
  for (int *it = arr; it != end; ++it) {
    for (int *it_next = (it + 1); it_next != end; ++it_next) {
      if (*it < *it_next) {

        swap(it, it_next);
        int temp = *it_next;
      }
    }
  }

  int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    char order;
    std::cout << "Enter \"w\", or \"s\" to sort the array" << std::endl;
    std::cin >> order;

    if (order == 'w') {
      bubbleSort_up(arr, size);
    }
    if (order == 's') {
      bubbleSort_down(arr, size);
    }

    printArray(arr, size);
    int i = 0;
    return 0;
  }