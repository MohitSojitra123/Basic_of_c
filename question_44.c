#include<stdio.h>

int main(){

    char ch;
    printf("Enter Character...");
    scanf("%c",&ch);

    char *prtch=&ch;

    printf("ch Address => %d \n",prtch);
   printf("ch Value => %c",(*prtch));

}