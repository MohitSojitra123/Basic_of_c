#include<stdio.h>

// Sum Of all Element In Array......

int main(){
    
    int array_size;

    printf("Enter Array Size....");
    scanf("%d",&array_size);

    int array[array_size];

    for(int i=0; i<array_size; i++){
        printf("Enter Array Element [%d] => ",i);
        scanf("%d",&array[i]);
    }

    int *array_ptr=array;
    int sum=0;

    // printf("%d",*(array_ptr+1));  * => given original value /// array_ptr + 1 => array current address + 1  and return in new address

    for(int i=0; i<array_size; i++){
        sum+=*(array_ptr+i);
    }

    printf("Sum Is... %d",sum);

}