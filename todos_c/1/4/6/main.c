#include <stdio.h>   // printf e scanf
#include <ctype.h>   // isalpha e tolower
#include <assert.h>  // assert
#include <stdlib.h>  // malloc e realloc
int palindromo(char*, int);
char *getlinha(int * tamanho)
{
  // Le uma string de tamanho desconhecido usando malloc e realloc ate
  // achar uma quebra de linha ('\n')
  int capacidade = 64;
  char *str;
  char c;

  str = malloc((sizeof *str )*capacidade); /* faça alocação inicial da string aqui */
  assert(str != NULL); // apenas para testes/Code Bench

  while (c = getchar(), c != '\n') {
    // Verifique o tamanho da string e realoque, se necessário
    if(*tamanho == capacidade){
      capacidade*=2;
      str = realloc(str, (sizeof*str)*capacidade);
    }
    if(isalpha(c)){
      str[*tamanho] = tolower(c);
      (*tamanho)++;
    }
  }
  // Nunca se esqueça do terminador...
  str[*tamanho] = 0;

  return str;
}



int main(void)
{
  // Para leitura da linha com sua função auxiliar
  int tamanho = 0;
  char *linha;
  linha = getlinha(&tamanho);
  
  

  /* Resolva o problema do palíndromo aqui
   */
  if(palindromo(linha,tamanho)){
    printf("palindromo");
  }else{
    printf("normal");
  }


  // Não se esqueça de liberar memória depois de usar
  free(linha);
}

int palindromo(char* palavra, int tamanho){
  int flagPalindromo = 1;
  for(int  cont = 0;  cont<((tamanho/2)) && flagPalindromo; cont++){
    if(tolower(palavra[cont]) != tolower(palavra[tamanho-cont - 1])){
      flagPalindromo = 0;
    }
  }
  return flagPalindromo;
}









