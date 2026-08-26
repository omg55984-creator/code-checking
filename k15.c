#include <stdio.h>
int main (){
    int a,b,c,d;
    printf("enter the number:L");
    scanf("%d",&a);
    b = 0;
    c = 1;
    for (int i = 0; i <= a; i++)
    {
         d =c+b;
         c = b;
         b = d;
         printf(" %d",d); 
    }
    return 0;
}