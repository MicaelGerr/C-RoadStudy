#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <ctype.h>
#include <string.h>


char* realocacaoMemoria(char*,int*);
void palavrasOrdemInversa(char*,int);

int main(void){
  int sizePalavras = 8;
  char *palavras;
  char palavra;
  int tamanho = 0;
  int flagFim = 1;
  int lastSymbol;
  
  palavras = malloc((sizeof palavras)*sizePalavras);

  while(flagFim){
    palavra = getchar();
    if(tamanho == sizePalavras){ 
      sizePalavras*=2;
      palavras = realloc(palavras, sizeof(*palavras)*sizePalavras);    
    }
    palavras[tamanho] = palavra;
    if(palavras[tamanho] == '\n' && palavras[tamanho-1] == '!' && palavras[tamanho-2] == 'm' 
     && palavras[tamanho-3] == 'i' && palavras[tamanho-4] == 'F' 
     && palavras[tamanho-5] == '\n'
      ){
      flagFim = 0;
    }
    tamanho++;
  }
  lastSymbol = tamanho-6;
  palavras[lastSymbol] = 0;
  palavrasOrdemInversa(palavras,lastSymbol);
  
}


void palavrasOrdemInversa(char*palavras,int tamanho){
  int j = 0;
  for(int i = tamanho; i>=0; i--){
    if(palavras[i] == '\n'){
      j = i+1;
      while(palavras[j] != '\n' && palavras[j] != '\0'){
        printf("%c", palavras[j]);
        j++;
      }
      printf("\n");
    }else if(i == 0){
      j = i;
      while(palavras[j] != '\n' && palavras[j] !='\0'){
        printf("%c", palavras[j]);
        j++;
      }
      printf("\n");
    }
    
  }
  
}

