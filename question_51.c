#include<stdio.h>

struct student{
    int roll;
    char name[50];
    float marks;
};

int main(){
  
      struct student s1={1,"mohit",88.5};

      struct student *ptr;

      ptr=&s1;

      printf("Student Roll Number...%d \n",ptr->roll);
      printf("Student Roll Number...%s \n",ptr->name);
      printf("Student Roll Number...%f \n",ptr->marks);

}