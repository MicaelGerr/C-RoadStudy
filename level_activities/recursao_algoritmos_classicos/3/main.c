#include <stdio.h>

void binarioRecursao(int);

int main(void){
  int valor;
  scanf("%d", &valor);
  if( valor > 0){
    binarioRecursao(valor);    
  }else{
    printf("0");
  }
  return 0;
}


void binarioRecursao(int value){
  int resto;
  if(value <2){
    printf("1");
  }else{
    resto = value%2; 
    binarioRecursao(value/2);
    printf("%d", resto);
  }
  return;
}