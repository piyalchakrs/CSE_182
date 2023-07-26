#include <stdio.h>

int main() {
  int a,b,c; // here a,b,c are the sides of the triangle.

  printf("Enter the three sides of a triangle: ");
  scanf("%d%d%d",&a,&b,&c);

  //checking if the sum of two sides are greater than other.
  if (a+b > c &  a+c > b & b+c > a) {
    printf("The triangle is valid.\n");
  }
  else {
    printf("The triangle is not valid.\n");
  }
  return 0;
}
