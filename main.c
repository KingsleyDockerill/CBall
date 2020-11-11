#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "src/lexer.h"

int main(void) {
  while(1){
    printf(">>> ");
    token* tokens = generate_tokens();
    for(int i = 0; tokens[i].value != NULL; i++){
      printf("%s:%s\n", tokens[i].name, tokens[i].value);
    }
  }
  return 0;
}