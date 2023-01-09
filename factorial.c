#include<stdio.h>
void main(){
    int num,fac=1;

printf("enter the number: \n");
scanf("%d",&num);
int x=num;
    for(int i=1;i<num;i++){
fac*=x;
x--;
    }
    printf("factorial of the number %d is:%d",num,fac);
}