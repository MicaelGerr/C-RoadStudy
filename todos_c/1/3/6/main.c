#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ehSubstring(char*, int, char*, int);

/* precisamos de pelo menos 200 caracteres*/

int main(void){

  
  int size_String;
  int size_subString;
  char String[201];
  char subString[201];
  
  while(scanf("%s", subString),
        scanf("%s", String),
        (strcmp(String, ".") &&
          strcmp(subString, "FIM"))){
    printf("subString: %d \n", strcmp(subString, "FIM"));
    printf("string %d \n", strcmp(String, "."));
    size_String = strlen(String);
    size_subString = strlen(subString);
    if(ehSubstring(String, size_String, subString, size_subString)) {
      printf("sim\n");
    }else{
      printf("Nao\n");
    }  
  }
  
  

    
}

int ehSubstring(char *vetor, int tamanho, char *subString, int subTamanho){
  int contSub = 0;
  int cont = 0;
  while(cont<tamanho){
    if(vetor[cont] ==subString[contSub]){
      contSub++;  
    }else{
      contSub = 0;
    }
    cont++;
    if(contSub == subTamanho){
      return 1;
    }
  }
  return 0;
}