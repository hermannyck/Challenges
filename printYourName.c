// your name surname and age from user

#include <stdio.h>

int main() {
  int age;
  char name[10], surname[10];
   printf("Enter your name \n");
   scanf("%s",name);
   printf("Enter your surname \n");
   scanf("%s",surname);
   printf("Enter your age \n");
   scanf("%d",&age);
   
   printf(" Your name is %s, your surname is %s, and you are %d years old",name,surname, age);

    return 0;
}
