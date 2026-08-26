#include<stdio.h>
int main(){
    int a ,c; 
    printf("enter the number:");
    scanf("%d",&a);
     
    for (int i = 1; i <= a; i++){
        for (int j = a-i; j>=0; j--){
            printf(" ");
        }
        for (int k =1;  k<i+1 ; k++)
        {
           printf("*");
        }
        printf("\n");
    }
return 0;
}
        