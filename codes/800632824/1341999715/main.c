#include <stdio.h>

int menorValor(void);

int main(void)
{ 
  menorValor();
  
  return 0;
}

int menorValor(void){
  int value, menor, cont;
  scanf(" %d ", &value);
  menor = value;
  for (cont =0; cont<2; cont++){
    scanf(" %d", &value);
    if(menor>value){
      menor = value;
    }
    printf("%d", menor);
  }

  printf("%d",menor);
  return menor;
}