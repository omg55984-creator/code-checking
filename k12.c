#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("enter the number:");
    scanf("%d",&d);
    a=0;
    b=1;
    if(d==1){
    printf("0");
    }else{
    printf("0\t");    
    for (int i = 1; i < d; i++)
    {
        c=a+b;
        a=b;
        b =c;
        printf("%d\t",a);
    }
}
return 0;
}    
    