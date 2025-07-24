#include<stdio.h>

int main(){

      int a,b,*ptra,*ptrb;

      printf("Enter Value Of a...");
      scanf("%d",&a);

      printf("Enter Value Of b...");
      scanf("%d",&b);

      ptra=&a;
      ptrb=&b;

      int sum=*ptra+*ptrb;

      printf("Sum Is...%d",sum);

}