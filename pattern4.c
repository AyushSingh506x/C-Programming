#include<stdio.h>
void main(){
    int x;
    printf("enter the value of x : \n");
    scanf("%d",&x);
    for (int i = 1; i <=x; i++)
    {
        for(int j =1;j<=x;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    
}