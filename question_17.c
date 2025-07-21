#include<stdio.h>

int main(){

    int user,counter=1;
    int ch='A';

    printf("ENter Anu Number....");
    scanf("%d",&user);

     

    for(int row=1; row<=user; row++){
        
        for(int space=1; space<=user-row; space++){
            printf(" ");
        }
        
        for(int col=1; col<=row; col++){
            if(row%2==0){
                printf("%c ",ch);
                ch++;
            }else{
                printf("%d ",counter);
                counter++;
            }
        }
        printf("\n");
    }

}