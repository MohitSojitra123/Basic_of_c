#include<stdio.h>

int main(){
  
     int user,i=0,sum=0;

    for(;;){
        printf("Enter Any Number (-1) exit....");
        scanf("%d",&user);
        if(user == -1){
            break;
        }else{
           sum+=user;
           i++;
        }
    }

    printf("Total Sum Is.... %d",sum);
    printf("Avg... Is.... %d",(sum/i));

}