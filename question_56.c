#include<stdio.h>

int check_prime(int a){
    
     int count=0;

    for(int i=1; i<=a; i++){
       if(a%i==0){
             count++;
       }
    }

     if(count ==2 ){
        return 1;
     }else{
        return 0;
     }

}

int main(){

   int ans=check_prime(31);

    printf("Number Is => (1 = Prime Or 0 = Not Prime) %d",ans);
}