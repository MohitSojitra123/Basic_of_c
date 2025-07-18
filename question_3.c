#include<stdio.h>

// Find Out Largest number from given 3 numbers using conditional operator....

int main(){

    int a,b,c;

    printf("Enter value of a...");
    scanf("%d",&a);

    printf("Enter value of b...");
    scanf("%d",&b);

    printf("Enter value of c...");
    scanf("%d",&c);

    if(a>b && a>c){
       printf("a Is Big %d",a);
    }else if(b>a && b>c){
       printf("b is Big %d",b);
    }else if(c>a && c>b){
       printf("c is Big %d",c);
    }

}