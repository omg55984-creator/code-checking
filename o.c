#include<stdio.h>
#include<math.h>

int f(int a){
    if (a == 0){
        return 0;

    }else if (a == 1){
        
        return 1; 
    }
    else {
        return f(a-1) + f(a- 2);
    }
}
int main (){
    int b ;
    printf("the enter the number :");
    scanf("%d",&b);
    for (int i = 0; i <= b; i++)
    {
        printf("%d\n",f(i));
    }
    return 0;

}