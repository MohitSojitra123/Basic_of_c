#include<stdio.h>

// count total duplicated element in array

int main(){

     int array_size;

    printf("Enter Array Size...");
    scanf("%d",&array_size);

    int array[array_size];

    for(int i=0; i<array_size; i++){
        printf("Enter Array Element [%d]",i);
        scanf("%d",&array[i]);
    }

    int viseted_array[array_size],count=0;

    for(int i=0; i<array_size; i++){
            viseted_array[i]=0;
    }

    for(int i=0; i<array_size; i++){
        if(viseted_array[i] == 1) continue;
        count=1;
        for(int j=i+1; j<array_size; j++){
             if(array[i] == array[j]){
                count++;
                viseted_array[j]=1;
             }
        }

        if(count> 1){
            printf("  %d =>  %d",array[i],count);
        }
        printf("\n");

    }

}