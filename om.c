 #include<stdio.h>
int main(){
    int a ,c; 
    printf("enter hte number:\n");
    scanf("%d",&a);
     
    for (int i = 1; i <= a; i++){
        int b = 65;
        for (int j = 1; j <= i; j++)
        {
          if (i%2== 0){
            c = b;
            printf("%c",c);
          }else {
            c = j;
            printf("%d",c);
          }
          b++;
           
        }
        printf("\n");
        
    }
return 0;
}    
 