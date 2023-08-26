#include <stdio.h>

int main() {
  int num1, num2, choice;
  char operator;

  printf("Enter the first number: ");
  scanf("%d", &num1);

  printf("Enter the second number: ");
  scanf("%d", &num2);

  printf("Select an operator: +, -, *, / ");
  scanf(" %c", &operator);

  switch (operator) {
    case '+':
      printf("%d + %d = %d", num1, num2, num1 + num2);
      break;
    case '-':
      printf("%d - %d = %d", num1, num2, num1 - num2);
      break;
    case '*':
      printf("%d * %d = %d", num1, num2, num1 * num2);
      break;
    case '/':
      printf("%d / %d = %d", num1, num2, num1 / num2);
      break;
    default:
      printf("Invalid operator");
      break;
  }

  return 0;
}
