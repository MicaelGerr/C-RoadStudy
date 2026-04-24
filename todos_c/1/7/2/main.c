#include <stdio.h>
#include <stdlib.h>

int * alocacaoDinamica(int);
void escreveVetor(int*,int);
void printVetor(int*, int);

int main(void){
  int tamanho;
  int *vetor;
  scanf("%d", &tamanho);
  vetor = alocacaoDinamica(tamanho);
  escreveVetor(vetor,tamanho);
  printVetor(vetor,tamanho);
  free(vetor);
  return 0;
}

int* alocacaoDinamica(int value){
  int *vetorDinamico;
  vetorDinamico = malloc((sizeof vetorDinamico) * value);
  return vetorDinamico;
}

void escreveVetor(int *vetor, int size){
  for(int cont = 0; cont<size; cont++){
    scanf("%d",(vetor+cont)); 
  }
  return ;
}

void printVetor(int *vetor, int size){
  for(int cont = size-1; cont>=0; cont--){
    printf("%d ", vetor[cont]);
  }
  return ;
}