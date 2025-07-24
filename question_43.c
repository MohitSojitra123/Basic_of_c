#include<stdio.h>

int main(){

     int a,b;
     
     printf("Enter Value Of a....");
     scanf("%d",&a);

     printf("Enter Value Of b...");
     scanf("%d",&b);

     int *ptra=&a;
     int *ptrb=&b;

     *ptra=*ptra+*ptrb;
     *ptrb=*ptra-*ptrb;
     *ptra=*ptra-*ptrb;

     printf("Value Of a...%d \n",a);
     printf("Value Of b...%d",b);

}