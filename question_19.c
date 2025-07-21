#include<stdio.h>

int main(){

    int user;
    printf("Enter Any Number...");
    scanf("%d",&user);

    for(int row=user; row>=1; row--){
        for(int col=1; col<=row; col++){
            printf("*");
        }
        printf("\n");
    }

}