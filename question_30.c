#include<stdio.h>

int main(){

     int array_size;

    printf("Enter Array Size...");
    scanf("%d",&array_size);

    int array1[array_size],array2[array_size];

    for(int i=0; i<array_size; i++){
        printf("Enter Array Element [%d] => ",i);
        scanf("%d",&array1[i]);
    }

    for(int i=0; i<array_size; i++){
        array2[i]=array1[i];
    }

    printf("Array 2 Element Print...");

    for(int i=0; i<array_size; i++){
        printf("%d",array2[i]);
    }

}