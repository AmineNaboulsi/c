#include <stdio.h>
   #include <stdlib.h>
   #include <string.h>
   
int main(){
    printf("enter you first name");
    char fname[20];
    fgets(fname,20,stdin);
      char lname[20];
          printf("enter you last name");
            fgets(lname,20,stdin);
    int g ;
    printf("enter your age: ");
    scanf("%d",&g);
    char sex; 
    printf("enter m for males and f for famales\n");
    scanf(" %c",&sex);
    printf("your full name: %s %s\n",fname,lname);
    printf("your %d years old\nand you're gander is :  %c",g,sex);
}