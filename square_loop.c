#include<stdio.h>
void main(){
    int i,j,num,power,square=1;
    printf("enter the value of number: \n");
    scanf("%d",&num);
    printf("enter the power of the number: \n");
    scanf("%d",&power);
    for(int i = 1;i<=power;i++){
        square*=num;

    }
    printf("the power of num is %d",square);
}