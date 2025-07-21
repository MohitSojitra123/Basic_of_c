#include<stdio.h>

int main(){

     int user;
     printf("Enter Any Number");
     scanf("%d",&user);

     for(int row=1; row<=user; row++){

         for(int space=1;  space<=user-row; space++){
            printf("-");
         }

          for(int col=1; col<=row; col++){
            printf("%d ",row);
          }
         
          printf("\n");
     }


}