#include <stdio.h>

int main() {
  int n, i, sum = 0;
  int arr[100];

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  printf("Enter the elements of the array: ");
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  for (i = 0; i < n; i++) {
    sum += arr[i];
  }

  printf("The sum of the elements is: %d\n", sum);

  return 0;
}
