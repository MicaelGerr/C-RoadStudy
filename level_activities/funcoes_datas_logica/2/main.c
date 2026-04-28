#include <stdio.h>
#include <string.h>

int alinhamentoCentenario(int);

int main(void){
  int valor;
  scanf("%d", &valor);
  alinhamentoCentenario(valor);
}

int alinhamentoCentenario(int ano){
  if (ano%100 == 0 && ano%400==0){
    
  }else{
    
  }
  printf("%s \n", (ano%4 == 0 || (ano%100==0 && ano%400==0)? "bissexto":"nao bissexto"));
  return (ano%100 == 0 && ano%400==0? 1:0);
}