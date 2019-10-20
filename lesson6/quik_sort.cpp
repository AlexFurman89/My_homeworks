#include <cstdio>
#include <iostream>

void printArray(int array[], int size) {
  int i = 0;
  while (i < size) {
    std::cout << array[i] << ' ';
    ++i;
  }
}
void quickSort(int arr[], int left, int right) {
  int i = left, j = right;
  int tmp;
  int pivot = arr[(left + right) / 2];

  while (i <= j) {
    while (arr[i] < pivot)
      i++;
    while (arr[j] > pivot)
      j--;
    if (i <= j) {
      tmp = arr[i];
      arr[i] = arr[j];
      arr[j] = tmp;
      i++;
      j--;
    }
  };
  if (left < j)
    quickSort(arr, left, j);
  if (i < right)
    quickSort(arr, i, right);
}

int main() {
  int arr[] = {64, 34, 25, 12, 22, 11, 90};
  int size = sizeof(arr) / sizeof(arr[0]);
  char order;

  quickSort(arr, 0, size - 1);

  printArray(arr, size);
  int i = 0;
  return 0;
}