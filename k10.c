#include<stdio.h>
#include<math.h>
int main(){
    int a,b,i,c;
    printf("enter the number");
    scanf("%d",&a);
    printf("enter the number");
    scanf("%d",&b);
    c = a*b;
    do
    {
        if ((c)%i == 0){
            c = c/i;
            i = i +1;
        }
    } while (i <= c);
    printf("the lcm of a and b: %d",c);
    return 0;
}
    
    

