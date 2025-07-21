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

for(int i = 0; i < array_size - 1; i++) {
    for(int j = 0; j < array_size - i-1; j++) {
        if(array[j] > array[j + 1]) {
            int temp = array[j];
            array[j] = array[j + 1];
            array[j + 1] = temp;
        }
    }
}


     for(int i=0; i<array_size; i++){
        printf("%d",array[i]);
     }



}