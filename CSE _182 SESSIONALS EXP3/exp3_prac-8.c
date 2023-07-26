#include <stdio.h>

int main() {
  int units;
  float charge, surcharge, total_bill;

  printf("Enter the number of units consumed: ");
  scanf("%d", &units);

  charge = 0;
  if (units <= 50) {
    charge = units * 0.50;
  } else if (units <= 150) {
    charge = 50 * 0.50 + (units - 50) * 0.75;
  } else if (units <= 250) {
    charge = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
  } else {
    charge = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
  }

  surcharge = charge * 0.20;
  total_bill = charge + surcharge;

  printf("The total electricity bill is Rs. %f\n", total_bill);

  return 0;
}
