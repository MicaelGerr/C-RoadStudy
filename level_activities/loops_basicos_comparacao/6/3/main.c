#include <stdio.h>
// #include <string.h> não necessário neste exercício

int tamanhostr(const char *string)
{ 
  int cont = 0;
  while(string[cont] != 0 && string[cont] != '\n' && string[cont] != ' '){
    cont++;
  }
  return cont;
}

int main(void)
{
  char word[512];
  scanf(" %s", word);
  int tamanho = tamanhostr(word);   
  if(42%tamanho == 0){
    printf("%d divide 42", tamanho);
  }else{
    printf("%d nao divide 42", tamanho);
  }

  return 0;
}