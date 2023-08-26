#include <stdio.h>

int main() {
  int n, i, first = 0, second = 1, next;

  printf("Enter the number of terms: ");
  scanf("%d", &n);

  printf("%d %d ", first, second);

  for (i = 2; i < n; i++) {
    next = first + second;

    if (next % 2 == 0) {
      continue;
    }
    printf("%d ", next);
    first = second;
    second = next;
  }

  return 0;
}
