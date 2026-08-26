#include<stdio.h>
int main(){
    int a,b ;
    b=0;
    printf("enter rthe number:");
    scanf("%d",&a);
    do{
        printf("the number %d\n",b+1);
        b =b+1;
       


    }while(b<a);
    return 0;
}