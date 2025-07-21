#include<stdio.h>

int main(){

     int user;

     printf("Enter Any Number...");
     scanf("%d",&user);

     for(int row=1; row<=user; row++){
        for(int col=row; col>=1; col--){
             if(col%2 == 0){
                 printf("0");
             }else{
               printf("1");
             }
        }
        printf("\n");
     }

}