#include<stdio.h>
int fac(){
    int i,x,fact=1,n;
    
    printf("enter the value of x: ");
    scanf("%d",&x);
    n=x;
    // n==x;
    for ( i = 1; i < n; i++)
    {
        fact *= x;
        x--;
        
    }printf("%d",fact);
    
}
void main(){
    fac();
}