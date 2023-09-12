#include <stdio.h>

int main() {
  int size, i;
  int array[100];
  int even_count = 0, odd_count = 0;

  printf("Enter the size of the array: ");
  scanf("%d", &size);

  printf("Enter the elements of the array: ");
  for (i = 0; i < size; i++) {
    scanf("%d", &array[i]);
  }

  for (i = 0; i < size; i++) {
    if (array[i] % 2 == 0) {
      even_count++;
    } else {
      odd_count++;
    }
  }

  printf("the number of even elements is: %d\n", even_count);
  printf("the number of odd elements is: %d\n", odd_count);

  return 0;
}
