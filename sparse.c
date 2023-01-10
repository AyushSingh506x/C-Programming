#include<stdio.h>
void main(){
    int m,n;
    int count=0;
    printf("enter the number of rows and coulmn: \n");
    scanf("%d%d",&m,&n);
    int arr[m][n];
    printf("enter the element of the array: \n");
    for (int i = 0; i < m; i++)
    {
    for(int j =0;j<n;j++){
        scanf("%d",&arr[i][j]);
    }
    }
    printf("the array is: \n");
    for (int  i = 0; i < m; i++)
    {
        for(int j=0;j<n;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
     for (int i = 0; i < m; i++)
    {
    for(int j =0;j<n;j++){
        if(arr[i][j]==0){
            count++;
        }
    }
    }
    if(count>=(m*n)/2){
        printf("THE GIVEN ARRAY IS A SPARSE MATRIX");

    }
    else{
        printf("THE ARRAY IS NOT A SPARSE MATRIX");
    }
    
}