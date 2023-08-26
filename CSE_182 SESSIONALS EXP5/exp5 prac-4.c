#include <stdio.h>

int main() {

  int num,i;

  printf("Enter a positive integer:");
  scanf("%d",&num);

  for (i=2;i<=num/2;i++){
        if(num%i==0){
                printf("The number is not prime");
        }
        else{
                printf("The number is prime");
                }
        break;
  }
        return 0;

  }
