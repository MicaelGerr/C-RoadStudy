#include <stdio.h>
#include <ctype.h>

int calculaTamanho( char[]);
void copiaFrase(char[], char[]);

int palindromo(char[], int);

int main(void){
  int tamanho = 101;
  char palavra[tamanho];
  char copia[tamanho];
  
  fgets(palavra, 101, stdin);
  copiaFrase(palavra, copia);
  int tamanhoPalavra = calculaTamanho(copia);
  if(tamanhoPalavra == 0){
    printf("palindromo");
  }else{
    if( palindromo(copia, tamanhoPalavra)){
      printf("palindromo");
    }else{
      printf("normal");
    }
  } 

  return 0;
}

void copiaFrase(char phrase[], char copy[]){
  int i = 0;
  int j = 0;
  while(phrase[i] != '\0'){
    if(isalpha(phrase[i])){
      copy[j] = phrase[i];
      j++;
    } 
    i++;
  }

}



int calculaTamanho( char palavra[]){
  int cont = 0;
  while(palavra[cont] != 0 && palavra[cont] != '\n'){
    cont++;
  }
  return cont;
}

int palindromo(char palavra[], int tamanho){
  int flagPalindromo = 1;
  for(int  cont = 0;  cont<((tamanho/2)) && flagPalindromo; cont++){
    if(tolower(palavra[cont]) != tolower(palavra[tamanho-cont - 1])){
      flagPalindromo = 0;
    }
  }
  return flagPalindromo;
}
