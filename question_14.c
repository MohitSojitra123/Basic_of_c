#include<stdio.h>

int main(){

      int a;

     printf("Enter Any Number...");
     scanf("%d",&a);

     for(int row=1; row<=a; row++){
        for(int col=1; col<=row; col++){
           if(row%2==0){
             printf("#");
           }else{
            printf("*");
           }
        }
        printf("\n");
     }

}