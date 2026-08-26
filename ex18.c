#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
int a ,c,b;
       printf("enter the number");
    scanf("%d",&a);
    b = sqrt(a);
    c= 2;
    for (int i = 2; i <= b; i++)
    {
        c++;
        if(a%i!=0){
            printf("0the number is prime");
               break;
        }else{printf("the number is  not prime");
            break;}
    }
return 0;
}