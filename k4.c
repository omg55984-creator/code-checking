#include<stdio.h>
int main(){
    int a, b ;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("the bitwise left %d ",a<<b);
    printf("the bitwise right %d ",a>>b);
    return 0;
}