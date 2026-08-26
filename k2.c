#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the number");
    scanf("%d",&a);
    b=0;
    c=0;
    do{
        b = b+1;
        c = c + b ;
    }while(b<a);
    printf("the sum %d",c);
       return 0;
}