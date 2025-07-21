#include<stdio.h>

int main(){

     int array_size;

     printf("Enter Array Size...");
     scanf("%d",&array_size);

     int array[array_size];

     for(int i=0; i<array_size; i++){
        printf("Enter Array Element [%d] => ",i);
        scanf("%d",&array[i]);
     }

     for(int i=0 , j=array_size-1; i<array_size; i++,j--){
         if(i<= array_size/2){
            int temp=array[i];
            array[i]=array[j];
            array[j]=temp;
         }    
     }

     for(int i=0; i<array_size; i++){
        printf("%d",array[i]);
     }



}