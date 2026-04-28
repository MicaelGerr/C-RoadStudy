#include <stdio.h>
#include <ctype.h>
// #include <string.h>  (não será necessario neste exercício)

void nomeSobrenome(char [], int tamanho);

int main(void){
  int tamanho = 21;
  char nome[tamanho];
  char sobrenome[tamanho];
  scanf("%s %s", nome, sobrenome);
  printf("Seja bem-vind@, %c. %s!", nome[0], sobrenome);
}

  