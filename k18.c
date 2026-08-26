#include<stdio.h>
int main()
{
    int a[5];
    int b,c;
    printf("enter the 10 number :");    
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > a[i+1] && a[i+1] != '\0'){
            b = a[i];
            
        }
        else {
            
            continue;
        }
    }
printf("the largest number is %d",b);
return 0;
}

     