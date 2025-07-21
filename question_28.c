#include<stdio.h>

int main(){

    int array_size;

    printf("Enter Array Size...");
    scanf("%d",&array_size);

    int array[array_size];

    for(int i=0; i<array_size; i++){
        printf("Enter Array Element....");
        scanf("%d",&array[i]);
    }

    int big_num=array[1];

    for(int i=0; i<array_size; i++){
        if(array[i] > big_num){
            big_num = array[i];
        }
    }

    printf("Largest Number In Array...%d",big_num);

}