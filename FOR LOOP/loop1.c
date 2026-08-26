  #include<stdio.h>
int main(){
    int a ; 
    printf("enter hte number:\n");
    scanf("%d",&a);
    for (int  i = 0; i < a; i++){
        for (int j = a -i; j>0; j--)
        {
            printf("* ");
        }
        printf("\n");

         
    }
    return 0;
}
