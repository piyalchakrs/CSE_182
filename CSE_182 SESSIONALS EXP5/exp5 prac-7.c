#include <stdio.h>

int main() {
  int n, i, factor;

  printf("Enter a number: ");
  scanf("%d", &n);

  for (i = 2; i <= n; i++) {
    if (n % i == 0) {
      int isPrime = 1;
      for (factor = 2; factor * factor <= i; factor++) {
        if (i % factor == 0) {
          isPrime = 0;
          break;
        }
      }
      if (isPrime) {
        printf("%d ", i);
      }
    }
  }

  return 0;
}
