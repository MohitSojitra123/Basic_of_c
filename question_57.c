#include<stdio.h>

// write a function which takes 2 numbers as parametes and returns the GCD of the 2 numbers. call the function in main().

void find_GVD(int a,int b);

int main(){

    int a,b;

    printf("Enter value Of a => ");
    scanf("%d",&a);

    printf("Enter value Of b => ");
    scanf("%d",&b);

    find_GVD(a,b);
}

void find_GVD(int a,int b){

     int min=a<b?a:b;
     int gcd=1;

     for(int i=1; i<=min; i++){
        if(a%i == 0 && b%i ==0){
            gcd=i;
        }
     }

     printf("GCD Of (%d,%d) Is => %d \n",a,b,gcd);
}