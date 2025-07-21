#include<stdio.h>

// pow() function

int main(){


    int x,y;
    printf("Enter value of x....");
    scanf("%d",&x);

    printf("Enter value of y....");
    scanf("%d",&y);

    int pow=1;

    for(int i=1; i<=y; i++){
        pow*=x;
    }

    printf("%d",pow);

}