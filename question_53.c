#include<stdio.h>

// wap to count simple interest  using function...

int find_interest(int p,int r,int n);

int main(){

   int ans=find_interest(1000,5,12);
  
   printf("Interest Is...%d",ans); 

}

int find_interest(int p,int r,int n){
      return ((p*r*n)/100);
}