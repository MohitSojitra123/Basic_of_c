#include<stdio.h>

int main(){

    int user;
    float sum=1.0;

    // 1 + 1/2 + 1/3 + 1/4 + 1/5 ..... n 

    printf("Enter Any Value...");
    scanf("%d",&user);

    for(int i=2; i<=user; i++){
        sum += (1.0/i);
    }

    printf("%.4f",sum);

}