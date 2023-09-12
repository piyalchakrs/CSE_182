#include <stdio.h>

void copy_array(int *arr1, int *arr2, int size) {
  int i;

  for (i = 0; i < size; i++) {
    arr2[i] = arr1[i];
  }
}

int main() {
  int arr1[] = {1, 2, 3, 4, 5};
  int arr2[5];
  int size = sizeof(arr1) / sizeof(arr1[0]);

  copy_array(arr1, arr2, size);

  printf("Elements of original array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr1[i]);
  }
  printf("\n");

  printf("Elements of new array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr2[i]);
  }
  printf("\n");

  return 0;
}
