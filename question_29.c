#include<stdio.h>

int main(){

    int array_size;
     printf("Enter Array Size...");
     scanf("%d",&array_size);

     int array[array_size];

     for(int i=0; i<array_size; i++){
        printf("Enter Array Element [%d] =>",i);
        scanf("%d",&array[i]);
     }

     printf("Second Element Is %d And Second Last Element Is %d and Sum Is %d",array[1] , array[array_size-2] , array[1]+array[array_size-2]);

}