#include<stdio.h>

int main() {

    int n,d; 
printf("enter the number and the digit whose frequency u wanna find: \n");
scanf("%d%d",&n,&d);
    int count=0; 

    while(n) {

        int rem = n%10; 
        if(rem == d){
            count++;
        }
        n=n/10; 
    }

    printf("%d",count);

    return 0;

}