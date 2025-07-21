#include<stdio.h>

int main(){

      int array_size,sum=0;

      printf("Enter Array Size...");
      scanf("%d",&array_size);

      int array[array_size];

      for(int i=0; i<array_size; i++){
        printf("Enter Array Element [%d] => ",i);
        scanf("%d",&array[i]);
        sum+=array[i];
      }

      printf("Sum Of Array Element Is...%d ",sum);
      printf("Avg... %d",sum/array_size);

}