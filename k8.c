#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("enter the number");
    scanf("%d",&a);
    b =  sqrt(a);
    
    for (int i = 2; i <= b; i++)
    {
        if (a%i==0){
        c=0;
    }else{
        c=1;
    }
    }
if (c==0){
    printf("the number is prime");
}else{
       printf("the number is not prime");
}    
return 0;
}