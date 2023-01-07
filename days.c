#include<stdio.h>
void main()
{
    int years,weeks,days,months;
    printf("enter the number of days ");
    scanf("%d",&days);
    years=days/365;
    months=days/30;
    weeks=days/7;
    
printf("%d days has %d years,%d months,%d weeks",days,years,months,weeks);
}