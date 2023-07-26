#include <stdio.h>

int main() {
  int a,b,c; // a,b,c are the sides of the triangle

  printf("Enter the three sides of a triangle: ");
  scanf("%d%d%d",&a,&b,&c);

  // Checking if the triangle is equilateral
  if ( a== b && b == c) {
    printf("The triangle is equilateral\n");
  }
  else if (a == b || a == c || b == c) {
    printf("The triangle is isosceles\n");
  }
  else {
    printf("The triangle is scalene\n");
  }

  return 0;
}
