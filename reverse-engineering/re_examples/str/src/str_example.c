#include <stdio.h>
#include <string.h>

#define MAXPASSLEN 20

char password[] = "GreyHats!";

void clean_input(char* input){
   for (int i = 0; i < MAXPASSLEN; i++)
   {
      if (input[i] == '\n'){
         input[i] = '\0';
         break;
      }
   }
}

int main(int argc, char* argv[]){
   char input_buf[MAXPASSLEN];
   bzero(input_buf, MAXPASSLEN);
   
   printf("Enter the password: ");
   fgets(input_buf, MAXPASSLEN, stdin);

   clean_input(input_buf);

   if(strcmp(password, input_buf) == 0) {
      printf("Correct!\n");
   } else {
      printf("Incorrect!\n");
   }
   return 0;
}
