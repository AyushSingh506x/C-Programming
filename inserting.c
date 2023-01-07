#include<stdio.h>
void main(){
    int i,size;
    printf("enter the size of the array: \n");
    scanf("%d",&size);
    int arr[size];
    printf("enter the element of the array: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the array is: \n");
    for (int i = 0; i < size; i++)

    {
printf("%d",arr[i]);
    }
    printf("\n");
    int num,pos;
    printf("enter the num u wanna insert: \n");
    scanf("%d",&num);
    printf("enter the postion on which you wanna insert the number: \n");
    scanf("%d",&pos);
    int n = size+1;

    for (int i = n-1; i >= pos; i--)
    {
          arr[i]=arr[i-1];
    
      
    }
        arr[pos-1]=num;
          
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    
}