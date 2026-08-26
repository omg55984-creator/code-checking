#include<stdio.h>
struct om{
    int meow ;
};
struct student {
    int roll ;
    char name[90];
    float cgpa;
    struct om atharv;
};
int main (){
     int a ; 
    printf("enter hte number:\n");
    scanf("%d",&a);
    struct student s[a]; 
    for (int i = 0; i < a; i++)
    {
         
    printf("enter the number:");
    scanf("%d",&s[i].roll);
    }
    for (int i = 0; i < a; i++)
    {
         
    printf("enter hte number:%d\n",s[i].roll);
     
    }
    return 0;
}