#include<stdio.h>
void main(){
    int size;
    printf("enter the size of the array:\n");
    scanf("%d",&size);
    int arr[size];
    printf("enter element in the array: \n");
   for (int i = 0; i < size; i++)
   {
     scanf("%d",&arr[i]);
   }
   printf("the array is: \n");
   for (int i = 0; i < size; i++)
   {
    printf("%d",arr[i]);
   }
   int array[size];
   for (int i = 0; i < size; i++)
   {
    array[i]=arr[i];
   }
   printf("\n");
    printf("the copied array is: \n");
   for (int i = 0; i < size; i++)
   {
    printf("%d",array[i]);
   }
}