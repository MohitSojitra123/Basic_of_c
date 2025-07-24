#include<stdio.h>

// Finad The Length Of String Using Pointer....

int main(){

     char str[100];

     printf("Enter a String....");
     gets(str);

     puts(str);

    //  printf("%c",str[0]);
    //  printf("%c",str[1]);

     char *prt_str=str;

     printf("%c",*(prt_str+1));  

     int  string_length=0;

     for(int i=0; str[i]!='\0'; i++){
        string_length++;
        prt_str=prt_str+i;
     }

     printf("String Length...%d",string_length);


}