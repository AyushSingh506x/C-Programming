#include<stdio.h>
void main(){
    int m,n;
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
       printf("the transpose array is: \n");
    for(int j=0;j<m;j++){
        for(int i =0;i<n;i++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}