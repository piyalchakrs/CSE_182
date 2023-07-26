#include <stdio.h>

int main() {
  int number;
  printf("Enter a number: ");
  scanf("%d", &number);

  if (number % 5 == 0) {
    if (number % 11 == 0) {
      printf("The number is divisible by 5 and 11\n");
    } else {
      printf("The number is divisible by 5 but not by 11\n");
    }
  } else {
    printf("The number is not divisible by 5 or 11\n");
  }

  return 0;
}
