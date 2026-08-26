#include<stdio.h>
int main(){
    char om[50];
    int a= 1;
    scanf("%[^\n]",om);
    for (int i = 0; om[i] != '\0'; i++)
    {
        a++;
    }
    printf("the length of stringis : %d",a);
     return 0;
    

}