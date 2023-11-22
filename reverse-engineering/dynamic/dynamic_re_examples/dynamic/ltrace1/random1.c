#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAXPASSLEN 20

void clean_input(char* input){
   for (int i = 0; i < MAXPASSLEN; i++)
   {
      if (input[i] == '\n') {
         input[i] = '\0';
         break;
      }
   }
}
int main(int argc, char* argv[]) {
   int rand_num;
   int input_int = 0;
   char input_buf[MAXPASSLEN];
   bzero(input_buf, MAXPASSLEN);

   srand(time(0));
   rand_num = rand();

   printf("Enter the password: ");
   fgets(input_buf, MAXPASSLEN, stdin);
   clean_input(input_buf);

   input_int = atoi(input_buf);

   if(rand_num == input_int) {
      printf("A true Grey Hat :)\n");
   } else {
      printf("Wrong answer!\n");
   }

   return 0;
}
