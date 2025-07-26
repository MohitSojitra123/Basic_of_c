#include<stdio.h>

void lower_to_upper(){

    char ch[100];
    printf("Enter a String...");
   scanf("%s",&ch);

     for(int i=0; ch[i]!='\0'; i++){
        if(ch[i] >=97 && ch[i]<=122){
            ch[i]=ch[i]-32;
        }
     }

     printf("%s",ch);
  
}

int main(){

    lower_to_upper();

}