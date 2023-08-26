#include <stdio.h>

int main() {
  int n, i, fact, sum = 0, temp;

  printf("Enter a number: ");
  scanf("%d", &n);

  temp = n;

  for (i = 0; n > 0; i++) {
    fact = 1;
    for (int j = 1; j <= n % 10; j++) {
      fact *= j;
    }
    sum += fact;
    n /= 10;
  }

  if (sum == temp) {
    printf("%d is a Strong number", temp);
  } else {
    printf("%d is not a Strong number", temp);
  }

  return 0;
}
