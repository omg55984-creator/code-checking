#include<stdio.h>
int f (int a){
    if (a ==0 || a== 1){
    return 1;}
    else {
        return a*f(a-1);
    }

}
int main (){
    int c,b;
    printf("ente the number");
    scanf("%d",&c);
    b = f(c);
    printf("%d",b);
    return 0;
}