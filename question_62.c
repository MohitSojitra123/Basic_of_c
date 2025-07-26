#include<stdio.h>

//  Delete all The Duplicate Element In Array....

int main(){

     int array_size;
      printf("Enter Array Size...");
      scanf("%d",&array_size);


      int array[array_size];

      for(int i=0; i<array_size; i++){
            printf("Enter Array Element  [%d]  =>  ",i+1);
            scanf("%d",&array[i]);
      }

      printf("\n-----------------------------------------\n");
       for(int i=0; i<array_size; i++){
            printf("  %d  ",array[i]);
       }
      printf("\n-----------------------------------------\n");

      for(int i=0; i<array_size; i++){
           for(int j=i+1; j<array_size; j++){
               if(array[i]  == array[j]){
                    for(int j1=j;  j1<array_size; j1++){
                          array[j]=array[j1];
                    }
                    array_size--;
               }
           }
      }

      printf("\n-----------------------------------------\n");
       for(int i=0; i<array_size; i++){
            printf("  %d  ",array[i]);
       }
      printf("\n-----------------------------------------\n");

}