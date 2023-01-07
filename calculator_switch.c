#include<stdio.h>
int main(){
      char z;
    int x,y;
    float result;
  printf("enter the operation to be perform ");
    scanf("%c",&z);
    printf("enter two numbers ");
    scanf("%d%d",&x,&y);
    
switch(z)
{
    case '+':
    result = x+y;
    printf("result: %d%c%d = %f\n",x,z,y,result);   
    break;
     case '-':
    result = x-y;
    printf("result: %d%c%d = %f\n",x,z,y,result);   
    break;
     case '*':
    result = x*y;
    printf("result: %d%c%d = %d\n",x,z,y,result);   
    break;
     case '/':
    result = (float)x/(float)y;
    printf("result: %d%c%d = %f\n",x,z,y,result);   
    break;
     case '%':
    result = x%y;
    printf("result: %d%c%d = %f\n",x,z,y,result);   
    break;
    default:
    printf("invalid operation");

}

return 0;
}