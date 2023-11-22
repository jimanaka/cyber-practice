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
  u_int rand_num1, rand_num2, rand_num3;
  char input_buf[MAXPASSLEN];
  bzero(input_buf, MAXPASSLEN);
  int input_int = 0;

  srand(time(0));
  rand_num1 = rand();
  rand_num3 = rand() % 2000;

  
  for (int i = 0; i < rand_num3; i++) {
    rand_num2 = rand();
    rand_num1 = rand_num1 + 2 * rand_num2;
  }

  printf("Enter the password: ");
  fgets(input_buf, MAXPASSLEN, stdin);
  clean_input(input_buf);

  input_int = (u_int) atoi(input_buf);

  if(rand_num1 == input_int) {
    printf("A true Grey Hat :)\n");
  } else {
    printf("Wrong answer!\n");
  }

  return 0;
}
