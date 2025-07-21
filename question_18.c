#include<stdio.h>

int main(){

     int user;
    printf("Enter Any Number...");
   scanf("%d",&user);

    for(int row=1; row<=user; row++){
        for(int col=1; col<=user; col++){
            if((row>=1 && col==1 ) || (row>=1 && col==user) || (col>=1 && row==1) || (col>=1 && row==user)){
               printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }


}