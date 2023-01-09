#include<stdio.h>
void main(){
    int ag1,ag2,ag3;
    printf("enter the two given angles of the triangles: \n");
    scanf("%d%d",&ag1,&ag2);
    ag3=180-(ag1+ag2);
    printf("%d is the third angle of the triangle",ag3);
}