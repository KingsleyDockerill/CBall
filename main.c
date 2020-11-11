#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "src/lexer.h"

int main(void) {
  while(1){
    printf(">>> ");
    token* tokens = generate_tokens();
    free(tokens);
  }
  return 0;
}