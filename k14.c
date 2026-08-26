#include<stdio.h>
#include<math.h>
int f(char a){
    
    if ( a == '\0'){
        return 0 ;
    }
    else { return f(a-1);}}
int main (){
     int b ;
    printf("the enter the number :");
    scanf("%d",&b);
    for (int i = b - 1; i <= b; i--)
    {
        printf("&c",f(i));
    }
    
return 0;
}
 