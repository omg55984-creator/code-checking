#include<stdio.h>
#include<string.h>
int main(){
     
    int a;
    char str1[] ="lkjgomgupta";
    char str2[] ="222omgupta";
    
   a= strcspn(str1,str2);
   int b = strlen(str1);
    printf("%d\n",b+1); 
    int c = strcmp(str1,str2); 
     printf("%d\n",c);
  
    strcat(str1,str2);

    printf("%s",str1);


    printf("%d",a);
    return 0;  
}
