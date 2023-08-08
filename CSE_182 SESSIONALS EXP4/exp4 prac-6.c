#include <stdio.h>

int main() {
  int number, lastDigit, firstDigit;

  printf("Enter a number: ");
  scanf("%d", &number);

  lastDigit = number % 10;

  while (number >= 10) {
    number /= 10;
  }
  firstDigit = number;

  printf("The first digit of the number is %d\n", firstDigit);
  printf("The last digit of the number is %d\n", lastDigit);

  return 0;
}

