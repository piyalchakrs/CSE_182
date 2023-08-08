#include <stdio.h>

int count_digit(int num){
    int count=0;
    while(num>0){
        count ++;
        num/=10;
    }
    return count;
}
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    int digit_count = count_digit(num);
    printf("the number of digit %d is %d \n",num,digit_count);


return 0;

}




