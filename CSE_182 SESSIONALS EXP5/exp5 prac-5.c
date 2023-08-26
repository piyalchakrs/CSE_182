#include <stdio.h>

int main() {
  int n,i;

  printf("Enter a number: ");
  scanf("%d", &n);
  for(i=2;i<=n/2;i++){
    if(n%i==0){
        printf("the number is not prime");
    }
    break;
  }

  return 0;
}
