#include <stdio.h>
#include <stdlib.h>

void preencheVetor(int*,int);
void imprime_vetor(int*,int);
int* instanciaVetor(int);

int main(void){
  int tamanho;
  int *vetor;
  scanf("%d", &tamanho);
  if(tamanho>=0){
    vetor = instanciaVetor(tamanho);
    preencheVetor(vetor, tamanho);
    imprime_vetor(vetor, tamanho);
  }
}

void imprime_vetor(int *vetor, int tam){
  printf("{");
  if(tam != 0){
    int i;
    for( i = 0; i<tam-1; i++)
      printf("%d, ", *(vetor+i));
    printf("%d", vetor[i]);
  }
  printf("}\n");
}

int* instanciaVetor(int tam){
  int *vetor;
  vetor = malloc(sizeof *vetor * tam);
  return vetor;
}

void preencheVetor(int *vetor, int tam){
  for(int i = 0; i<tam; i++){
    scanf("%d", &vetor[i]);
  }
}