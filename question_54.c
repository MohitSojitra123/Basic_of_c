#include<stdio.h>

int sun_of_n_number();

int main(){

    
    int ans=sun_of_n_number();

    printf("Ans Is => %d ",ans);
}

int sun_of_n_number(){
    
    int user,sum=0;
      printf("Enter Any Number...");
      scanf("%d",&user);

      for(int i=1; i<=user; i++){
         sum+=i;
      }

      return sum;

}