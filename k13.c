#include<stdio.h>
#include<math.h>
int f(int a){
    if ( a == 0){
        return 0;
    }else {
        return (a%10)+f(a/10);
    }

}
int main(){
    int b ;
    printf("the enter the number :");
    scanf("%d",&b);
    printf("%d",f(b));
return 0;

}


