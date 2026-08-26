#include<stdio.h>
int main(){
    int a ,c; 
    printf("enter the number:");
    scanf("%d",&a);
   for ( int j= 0; j < a; j++)
   {
    
   
     
    for (int i = 1; i <= a; i++){
         for (int j = 1; j <= a; j++)
        {
             if (i == j || i+j == 1+a){
                printf("*");
             }else {printf(" ");}
        }
        printf("\n");
    }  }  
return 0;
}