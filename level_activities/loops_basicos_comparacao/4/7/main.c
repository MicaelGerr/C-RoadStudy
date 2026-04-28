#include <stdio.h>

void imprime_vetor(int vetor[], int tamanho)
{
  // Imprime o valor do primeiro elemento com a chave esquerda
  printf("{%d", vetor[0]);

  // Imprime os valores dos demais elementos
  for (int i = 1; i < tamanho; i++)
    printf(", %d", vetor[i]);

  // Imprime a chave direita
  printf("}\n");
}


void preenche_vetor(int vetor[], int tamanho)
{

}


int main(void)
{
  int N;

  // Lê o tamanho do vetor
  scanf("%d", &N);

  // Aloca um vetor de pilha com N elementos (int)
  int vetor[N];

  // Preenche e imprime o vetor
  preenche_vetor(vetor, N);
  imprime_vetor(vetor, N);
}