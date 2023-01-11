
#include <stdio.h>

int main()
{
    int x;
    printf("Enter any number: ");
    scanf("%d", &x);
    if(x & 1==1)
        printf("LSB of %d is set (1)", x);
    else
        printf("LSB of %d is unset (0)", x);

    return 0;
}