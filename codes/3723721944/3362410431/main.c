#include <stdio.h>
#include <stdlib.h>

int **alocacaoDinamicaDupla(int, int);
void printVetor(int**, int, int);
void preencheVetor(int**, int, int);

int main(void)
{
  int num_vetores;
  int tam_vetor;
  int **vetores;
  
  scanf("%d%d", &num_vetores, &tam_vetor);

  // Aloca um vetor de ponteiros
  vetores = alocacaoDinamicaDupla(num_vetores, tam_vetor);
  preencheVetor(vetores,tam_vetor,num_vetores);
  printVetor(vetores, tam_vetor, num_vetores);

  // Continue...
}

int **alocacaoDinamicaDupla(int valuex, int valuey){
 int **vetorDinamico;
  vetorDinamico = malloc((sizeof vetorDinamico) * valuex);
  for(int cont = 0; cont<valuex; cont++){
    *(vetorDinamico+cont) = malloc((sizeof *vetorDinamico)*valuey);
  }
  return vetorDinamico;
}

void preencheVetor(int **vetor, int x, int y){
  for(int i = 0; i<y; i++){
    for(int j= 0; j<x; j++)
      scanf("%d",*(vetor+i)+j);
  }
  fflush(stdin);/* limpeza do buffer do teclado, muito bom*/
}

void printVetor(int **vetor, int x, int y){
  for(int i = y-1; i>=0; i--){
    printf("v%d:",i);
    for(int j= 0; j<x; j++)
      printf(" %d", vetor[i][j]);
    printf("\n");
  }
}