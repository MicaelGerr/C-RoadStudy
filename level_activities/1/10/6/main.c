#include <stdio.h> /* <-- DIRETIVAS */

void maiorBinario(int value1, int value2);

int main(void)
{
  int valor1, valor2;
  scanf("%d",&valor1);
  scanf("%d",&valor2);
  maiorBinario(valor1,valor2);

  printf("\n");
    
  return 0;
}

void maiorBinario(int valor1, int valor2){
  if(valor1<valor2){
    printf("%d",valor1);
  }else{
    printf("%d", valor2 );
  }
}