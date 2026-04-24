#include <stdio.h>
#include <ctype.h>  // para usar tolower()

void contaVogais(char*);

int main(void){
  int tamanho = 101;
  char word[tamanho];
  fgets(word, 101, stdin); 
  contaVogais(word);

  return 0;
}

void contaVogais(char *palavra){
  int cont = 0;
  int vogais = 0;
  while( palavra[cont] != '\0' && palavra[cont] != '\n'){
    switch(tolower(palavra[cont])){
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
        vogais++;
      default:
      break;
    }
    cont++;
  }
  printf("%i", vogais);
  
}