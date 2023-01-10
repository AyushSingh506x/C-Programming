#include<stdio.h>
void main(){
    int i,x,multi;
printf("enter the number: \n");
scanf("%d",&x);
for (int i = 1; i <=10; i++)
{
    multi=x*i;
    printf("\n%d",multi);
}

}