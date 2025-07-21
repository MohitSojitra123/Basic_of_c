#include<stdio.h>

// Reverse Number....

int main(){

    int rev_num;

    printf("Enter Any Number..");
    scanf("%d",&rev_num);

    int rev_num_copy=rev_num,last_digit,rev_number=0;

    while (rev_num != 0)
    {
          last_digit=rev_num%10;
          rev_number=rev_number*10 + last_digit;
          rev_num=rev_num/10;
    }
    
    printf("%d",rev_number);


}