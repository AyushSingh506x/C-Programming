#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter the value of a,b,c: \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c){
        printf("a is greater the both b and c\n");
    }
    else if(b>a&&b>c){
        printf("b is greater then both a and c\n");
    }
    else{
        printf("c is greater then both a and b\n");
    }
}