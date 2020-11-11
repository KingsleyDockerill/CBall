#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "src/lexer.h"

token* tokens;

int main(void) {
  while(1){
    printf(">>> ");
    tokens = generate_tokens();
    for(int i = 0; tokens[i].value != NULL; i++){
      if(tokens[i].name != NULL){
        printf("%s:%s\n", tokens[i].name, tokens[i].value);
      }
      token tokentype;
      tokentype.name = NULL;
      tokentype.value = "";
      tokens[i] = tokentype;
    }
  }
  return 0;
}