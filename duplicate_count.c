#include<stdio.h>
void main(){
    int size;
    printf("enter the size of the array: \n");
    scanf("%d",&size);
    int arr[size];
    printf("enter the element of the array: \n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]==arr[i+1]){
            count++;
        }
    }
    printf("\nnumber of repeated elemnt is %d",count);
}

