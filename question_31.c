#include<stdio.h>

int main(){

    int array_size;
    printf("Enter Array Size...");
   scanf("%d",&array_size);

    int array[array_size],odd_count=0,even_count=0;

    for(int i=0; i<array_size; i++){
        printf("Enter Array Element....");
        scanf("%d",&array[i]);
        if(array[i] %2 == 0){
            even_count++;
        }else{
            odd_count++;
        }
    }

    printf("Odd Number....%d \n",odd_count);
    printf("Even Number....%d",even_count);

    

    


}