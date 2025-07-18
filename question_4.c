#include<stdio.h>


// Check Whether character is an alphabet or not using conditional operator

int main(){

     char ch;

     printf("Enter Any Type Of Character....");
     scanf("%c",&ch);

     if((ch >=65 && ch<=90) || (ch>=97 && ch<=112)){
         printf("It Is Alphabet... %c",ch);
     }else{
        printf("It is Not Alphabet...");
     }

}