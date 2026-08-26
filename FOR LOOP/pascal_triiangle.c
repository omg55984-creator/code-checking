#include<stdio.h>
#include<math.h>
int main(){
    int a =4 ;
      for (int i = 1; i <= a; i++){
        for (int j = 0; j<4-i;j++){
            printf(" ");
        }
        for (int k =0;  k<i; k++)
        {
           printf("* ");
        }
        printf("\n");
    }
    
     
return 0;
    
}