#include <stdio.h>

int main() {
  int n, i, j, sum = 0;

  printf("Enter a number: ");
  scanf("%d", &n);
  for (i = 2; i <= n; i++) {
    int isPrime = 1;
    for (j = 2; j * j <= i; j++) {
      if (i % j == 0) {
        isPrime = 0;
        break;
      }
    }
    if (isPrime) {
      sum += i;
    }

    else {
      continue;
    }
  }
  printf("The sum of all prime numbers between 1 and %d is %d\n", n, sum);

  return 0;
}
