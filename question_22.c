#include<stdio.h>

// palindrom Number Check Yes or Not

int main(){

    int number;

    printf("Enter Any Number To Check Palindrom....");
    scanf("%d",&number);

    int number_copy=number;
    int reverse_number=0;
    int last_digit;

    while (number !=0 )
    {
        last_digit=number%10;  // last digit remove
        reverse_number=(reverse_number*10) + last_digit; //reverse number
        number=number/10;   // remove last digit
    }

    if(reverse_number == number_copy){
        printf("Number Is Palindromeee.. %d",number_copy);
    }else{
        printf("Number Not Is Palindromeee.. %d",number_copy);
    }
    

}