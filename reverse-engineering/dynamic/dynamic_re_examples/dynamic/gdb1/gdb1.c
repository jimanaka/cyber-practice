#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
  char input_buf[MAXPASSLEN];
  bzero(input_buf, MAXPASSLEN);
  int input_int = 0;

  int ans = 1243;
  
  for (int i = 2; i < 917; i++) {
    ans = ans + 2 * i;
  }

  printf("Enter the password: ");
  fgets(input_buf, MAXPASSLEN, stdin);
  clean_input(input_buf);

  input_int = atoi(input_buf);

  if(ans == input_int) {
    printf("A true Grey Hat :)\n");
  } else {
    printf("Wrong answer!\n");
  }

  return 0;
}
