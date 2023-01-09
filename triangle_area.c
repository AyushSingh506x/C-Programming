#include<stdio.h>
void main(){
    int base,height,area;
printf("enter the value of base of the triangle: \n");
scanf("%d",&base);
printf("enter the value of height of the triangle: \n");
scanf("%d",&height);
area = (base*height)/2;
printf("the area of the triangle with base=%d and height=%d is %d m^2",base , height , area);
}