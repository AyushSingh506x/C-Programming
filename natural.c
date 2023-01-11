#include<stdio.h>
 
int main()
{
    int Number, i = 1,sum=0;
   
    printf("\n Please Enter  Value : ");
    scanf("%d", &Number);
     
    printf("\n List of Natural Numbers from 1 to %d are \n", Number);   
    while(i <= Number)
    {
        printf(" %d \t", i);
        i++;
    }
    printf("\n");
    for(i =1;i<=Number;i++){
sum+=i;

    }
    printf("sum of natural number is %d",sum);
   
    return 0;
}