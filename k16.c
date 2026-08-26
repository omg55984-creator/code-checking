#include<stdio.h>
int main()
{
int a  ;
printf("the enter the number :");
scanf("%d ",&a);
    for (int i = 0; i < a; i++)
    {    for (int j = 0; j <i ; j++)
    {
        printf("*");
    }
    
        
      printf("\n")  ;
    }
return 0;
}    