#include <stdio.h>
#include <ctype.h>

int calculaTamanho( char[]);

int palindromo(char[], int);

int main(void){
  int tamanho = 100;
  char palavra[tamanho];

  scanf("%s", palavra);
  int tamanhoPalavra = calculaTamanho(palavra);
  if(tamanhoPalavra == 0){
    printf("palindromo");
  }else{
    if( palindromo(palavra, tamanhoPalavra)){
      printf("palindromo");
    }else{
      printf("normal");
    }
  }
    
  

  return 0;
}



int calculaTamanho( char palavra[]){
  int cont = 0;
  while(palavra[cont] != 0 && palavra[cont] != '\n' && palavra[cont] != ' '){
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


