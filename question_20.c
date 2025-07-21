#include<stdio.h>

int main(){

    int user,count=0,odd_num=1;

    printf("Enter Any Number....");
    scanf("%d",&user);

    for(int i=1; i<=user; i++){
       count+=odd_num;
       odd_num+=2;
    }

    printf("Sum Of odd Number... %d",count);

}