#include<stdio.h>
#include<math.h>
int f(int a){
    if (a == 0 || a == 1){
        return 1;
    }else {
        return a * f(a -1);
    }
}
float p (int a , int b){
    float k = (float)f(a)/f(b);
    return k;
}
float cp (int a , int b){
    float h = (float)f(a)/f(b)*f(a-b);
    return h;}
int main(){
    int c,d;
    printf("enter the number:");
    scanf("%d",&c);
    printf("enter the number:");
    scanf("%d",&d);
    printf("the p of a and b is %f\n",p(c,d));
     printf("the c of a and b is %f",cp(c,d));
     return 0;


}    