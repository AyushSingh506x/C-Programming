#include<stdio.h>
void main(){
    int i,j,c,n;
    printf("enter the size of the array: ");
    scanf("%d",&n);
    int x[n];
    printf("enter the elements of the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);

    }for(j=0;j<n;j++)
{
    for(i=0;i<n-1-j;i++){
        if(x[i]>x[i+1]){
c=x[i];
x[i]=x[i+1];
x[i+1]=c;
        }
    }
}for ( i = 0; i <n; i++)
        {
            printf("%d ",x[i]);
        }
        printf("\n");
        printf("%d second largest\n",x[n-2]);

        
}