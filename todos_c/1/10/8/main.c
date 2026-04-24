#include <stdio.h>

int menorValor(int, int );
int maiorValor(int , int);

int main(void)
{
  int values;
  int maior,menor;

  scanf(" %d", &values);
  maior = values;
  menor = values;
  
  for (int cont = 0; cont< 2; cont++){
    scanf(" %d",&values);
    maior = maiorValor(values,maior);
    menor = menorValor(values,menor);
  }
  
  printf("%d\n", (maior-menor));
  
  return 0;
}


int menorValor(int valor, int menor){
  if(menor>valor){
     menor = valor;
  } 
  return menor;
}

int maiorValor(int valor, int maior){

  if(valor > maior){
    maior = valor;
  }

  return maior;
}






