#include <stdio.h>

int main() {
  int size, i;
  int array[100];

  printf("Enter the size of the array: ");
  scanf("%d", &size);

  printf("Enter the elements of the array: ");
  for (i = 0; i < size; i++) {
    scanf("%d", &array[i]);
  }

  printf("All negative elements in the array are: ");
  for (i = 0; i < size; i++) {
    if (array[i] < 0) {
      printf("%d ", array[i]);
    }
  }

  return 0;
}
