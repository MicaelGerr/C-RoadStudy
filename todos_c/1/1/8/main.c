#include <stdio.h>

int comparacaoMaior( int, int);
int comparacaoMenor( int, int);

int main(void){
  int maior, menor, sentinela;

  scanf("%d ", &sentinela);
  
  maior = sentinela;
  menor = sentinela;
  
    
  while( scanf("%d", &sentinela),sentinela != 0){
   
    maior = comparacaoMaior(sentinela, maior);
    menor = comparacaoMenor(sentinela, menor);
  
  }
  printf("%d %d \n",maior, menor);

  return 0;
}

int comparacaoMaior(int valorEntrada, int valorMaior){
  if(valorEntrada>valorMaior){
    valorMaior = valorEntrada;
  }
  return valorMaior;
}

int comparacaoMenor(int valorEntrada, int valorMenor){
  if (valorEntrada < valorMenor){
    valorMenor = valorEntrada;
  }
  return valorMenor;
}