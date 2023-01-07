#include<stdio.h>
int main()
{
    int a,b,c;
        printf("\n enter 1st no: ");
        scanf("%d",&a);

    printf("\n enter 2nd no: ");
        scanf("%d",&b);
        printf("\nvalue of a=%d and b=%d",a,b);
    
        c=a;
        a=b;
        b=c;
        printf("\nafter swaping a=%d and b=%d",a,b);
}

    

