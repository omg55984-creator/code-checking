#include<stdio.h>
#include<math.h>
int main(){
    char om[25000];
    int b = 0;
    printf("enter the strung: ");
    scanf("%[^\n]",&om);
    for (int i = 0 ; om[i] != '\0'; i++)
    {
        b++;
    }
    for (int i =  b - 1;i >= 0 ; i--)
    {
        printf("%c",om[i]);
    }
    return 0;
}
     