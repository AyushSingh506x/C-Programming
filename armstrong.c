#include<stdio.h>
int main(){
    int n,r,sum=0,temp;
    printf("enter any number ");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;

    }
    if(temp==sum){
        printf("%d is armstrong",temp);
    }else{
        printf("not armstrong");
    }
}