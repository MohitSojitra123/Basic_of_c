#include<stdio.h>

// Count Duplicate Element In Array

int main(){


     int array_size;

     printf("Enter Array Size....");
     scanf("%d",&array_size);

     int array1[array_size], visited_array[array_size];

    for(int i=0; i<array_size; i++){
          visited_array[i]=0;
    }

     for(int i=0; i<array_size; i++){
           printf("%d",visited_array[i]);
     }

     for(int i=0; i<array_size; i++){
          printf("Enter Array Element [%d] =>  ",i+1);
          scanf("%d",&array1[i]);
     }

    printf("\n-----------------------------\n");
     for(int i=0; i<array_size; i++){
         printf(" %d ",array1[i]);
        }
    printf("\n-----------------------------\n");


    for(int i=0; i<array_size; i++){

          if (visited_array[i] == 1)
          {
              continue;
          }else{
               int count=1;
              for(int j=i+1; j<array_size; j++){
                  if(array1[i] == array1[j]){
                      count++;
                      visited_array[j]=1;
                    }
                }
                if(count>1){
                    printf("Duplicate Element  %d =>  %d \n",array1[i],count);
                }
                }
    }

}