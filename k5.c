#include<stdio.h>
int main(){
    int a , b;
    char c ;
    printf("the expreesion");
    scanf("%c",&c);
    printf("writr xandy:\n");
    scanf("%d %d",&a,&b);
    
     
    switch (c)
    {
        
        case '-':
        printf("the difference %d",a - b);

    
    default:
        break;
    }
    return 0 ;
}