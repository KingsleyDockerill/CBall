// Lexer.h has all the standard definitions
typedef struct {
  char* name;
  char* value;
} token;

token* generate_tokens(){
  token a[1000];
  token temptok;
  int c;
  int i; // The current a element
  while((c = getchar()) != '\n'){
    if(c == ' ' || c == '\t'){
      c = getchar();
    }
    else if(c == '\''){
      token temp;
      temp.name = "squote";
      temp.value = "'";
      a[i] = temp;
      i++;
    }
  }
  token temp;
  temp.name = "EOF";
  a[i] = temp;
  return a;
}