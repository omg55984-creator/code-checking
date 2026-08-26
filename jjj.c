#include<stdio.h>
#include<stdlib.h>
struct account {
     char name[50];
     int age ;
     int a_num;
     int balance;
     };
int main (){
FILE *fptr;
fptr = fopen("file.txt","w");
fprintf ( fptr, "hello world\n");
fclose(fptr);
return 0;
}