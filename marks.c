#include<stdio.h>
int main()
{
    float a,b,c,d,e,total,percentage,average;
    printf("enter marks of english  ");
    scanf("%f",&a);
    printf("enter marks of maths ");
    scanf("%f",&b);
    printf("enter marks of physics  ");
    scanf("%f",&c);
    printf("enter marks of chemistry ");
    scanf("%f",&d);
    printf("enter marks of biology ");
    scanf("%f",&e);
    total=a+b+c+d+e;
    percentage=(total/500)*100;
    average=total/5;
    printf("percentage = %f, total marks = %f, average = %f ",percentage,total,average);
}