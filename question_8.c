#include<stdio.h>

int main(){
   int   a=5,b=3 ,c=a++ || b++;
   // int   a=5,b=3 ,c=a++ && b++;

   printf("a => %d \n",a);
   printf("b => %d \n",b);
   printf("c => %d \n",c);

}