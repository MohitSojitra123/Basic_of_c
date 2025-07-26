#include<stdio.h>

int main(){

    char user_input[100];

    printf("Enter Any Number...");
    scanf("%s",&user_input);


     int i,loop_count;

    for(i=0; user_input[i]!='\0'; i++){
           if(user_input[i] >='1' && user_input[i]<='9'){
              loop_count=user_input[i]-'0';
               for(int j=1; j<=loop_count; j++){
                    printf("%c",user_input[i+1]);
               }  
               i+=1;
           }else if( (user_input[i] >='a' && user_input[i]<='z') || (user_input[i] >='A' && user_input[i]<='Z') ){
                   printf("%c",user_input[i]);
           }   
    }



}