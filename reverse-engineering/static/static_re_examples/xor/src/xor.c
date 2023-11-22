#include <stdio.h>
#include <string.h>

#define MAXPASSLEN 20

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

   char xor[MAXPASSLEN];
   bzero(xor, MAXPASSLEN);

   int answer[] = {98, 115, 97, 97, 101, 125, 96, 118, 35};
   
   printf("Enter the password: ");
   fgets(input_buf, MAXPASSLEN, stdin);

   clean_input(input_buf);

   int len = strlen(input_buf);

   for (int i = 0; i < len; i++){
      xor[i] = input_buf[i] ^ 0x12;
   }

   if (len != 9) {
      printf("incorrect!\n");
      return 0;
   }

   for (int i = 0; i < len; i++){
      if (xor[i] != answer[i]) {
         printf("incorrect!\n");
	 return 0;
      }
   }

   printf("correct!\n");

   return 0;
}
