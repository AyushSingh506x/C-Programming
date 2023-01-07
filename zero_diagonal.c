#include<stdio.h>
void main(){
    int i,j,m,n;
    int ben_ten=0;
    printf("Enter the number of rows: \n");
    scanf("%d",&m);
    printf("enter the number of coulmn: \n");
    scanf("%d",&n);
    int arr[m][n];
    
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i==j){
                arr[i][j]=1;}
                else if(i!=j){
                    arr[i][j]=0;
                    
                }
            }
      
        }
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                printf(" %d",arr[i][j]);
           
         }
        printf("\n");
        }
    }
    
    
