#include <stdio.h>
#include <stdlib.h>


void lerValor(int*,int);
void printVetor(int*, int);
int * pares(int*,int, int*);

int main(void){
  int tamanho;
  int *vetor;
  int *vetorPar;
  int tamPar;
  
  scanf("%d", &tamanho);
  vetor = malloc(sizeof *vetor * tamanho);
  lerValor(vetor,tamanho);
  vetorPar = pares(vetor, tamanho, &tamPar );
  printf("pares: ");
  if(vetorPar == NULL){
    printf("nenhum");  
  }else{
    printVetor(vetorPar, tamPar);
  }
  printf("\nvetor original: ");
  printVetor(vetor, tamanho);
  printf("\n");
  free(vetor);
  free(vetorPar);

  return 0;
}

int* pares(int *vetor, int size, int *tamVetorPar){
  int *vetorDePares;
  vetorDePares = malloc(sizeof *vetorDePares * size);
  int j = 0;
  char temPar = 0;
  for(int i = 0; i<size; i++){
    if(vetor[i] %2 == 0){
      vetorDePares[j++] = vetor[i];
      temPar = 1;
    }
  }
  *tamVetorPar = j;
  if(!temPar){
    vetorDePares = NULL;      
  }
  return vetorDePares;
  
}

void printVetor(int *vetor, int size){
  for(int cont = 0; cont<size; cont++){
    printf("%d ", vetor[cont]);
  }
  
  return ;
}

void lerValor(int *vetor, int size){ 
  for(int cont = 0; cont<size; cont++){
    scanf("%d",(vetor+cont)); 
  }
  fflush(stdin);
  return ;
}



/* copia na memoria dinamica de um vetor de valores pares extraidos */