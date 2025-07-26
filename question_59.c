#include<stdio.h>

// range_based Prime Number....

void check_is_prime(int num){
    int count=0;
    for(int i=1; i<=num; i++){
        if(num%i==0){
            count++;
        }
    }

    if(count==2){
        printf("Number Is Prime  => %d  \n",num);
    }
}


int main(){

    int start,end;
    printf("Enter Starting Point....");
    scanf("%d",&start);

    printf("Enter Ending Point...");
    scanf("%d",&end);

    for(int i=start; i<=end; i++){
         check_is_prime(i);
    }

}