#include<stdio.h>
int main(){
    int a ;
    printf("the year:");
    scanf("%d",&a);
    if (a%4 == 0){
        if (a%100 == 0){
            if (a%400 == 0){printf("year is leap year\n");}
            else {printf("year is not leap year");}    
        }else {printf("year is not leap year");}
    }else {printf("year is not leap year");}   

        
return 0 ;

}