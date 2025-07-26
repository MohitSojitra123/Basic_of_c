#include<stdio.h>
#include<string.h>

int main(){


    char user_str[100];
    char find_str[100];

    printf("Enter String...");
    gets(user_str);


    printf("Enter Find String....");
    gets(find_str);


     int find_str_length=0,user_length=0; 

     
     for(int i=0; find_str[i]!='\0'; i++){
         find_str_length++;
        }
        
        for(int i=0; user_str[i]!='\0'; i++){
            user_length++;
        }
        
    int i,cut_index;

    for(i=0; user_str[i]!='\0'; i++){
        
             int  temp_index=i;
             int istrue=0;
             
          for(int j=0; j<find_str_length; j++){   
            if(user_str[temp_index] == find_str[j]){
                   temp_index++;
                   istrue++;        
            }
          }

          if(istrue == find_str_length){
                // printf("Starting Index Is %d ",i);
                cut_index=i;
                break;
          }

    }

    printf("\n----------------------------------\n");
    
    //  printf("final position =>  %d",cut_index);


      for(int s=cut_index; s<user_length; s++){
          printf("%c",user_str[s]);
      }
  
   
    printf("\n----------------------------------\n");

}