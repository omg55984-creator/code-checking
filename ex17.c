#include<stdio.h>
int main(){
    int a,b,c ,lcm;
      printf("enter the number");
    scanf("%d",&a);
      printf("enter the number");
    scanf("%d",&b);  
    for (int i = 1; i>0 && i<=a && i <= b; i++)
    {
       if (a%i ==0 && b %i ==0)
       c = i;
    }
    lcm = a*b/c;
    printf("hte lcm of tnumberr is ; %d",lcm);
    return 0;
}