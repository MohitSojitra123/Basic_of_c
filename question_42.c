#include<stdio.h>

int main(){

 int user;   
printf("Enter Any Number...");
scanf("%d",&user);

int *ptr=&user;

printf("ptr => %d \n",*ptr);
printf("ptr => %d",ptr);

}