#include<stdio.h>
void main(){
    int a,b;
    printf("enter the value of a and b: \n");
    scanf("%d%d",&a,&b);
    printf("\nvalue of a and b is %d and %d before swaping",a,b);
    printf("\n");
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swaping value of a is %d and value of b is %d",a,b);
}