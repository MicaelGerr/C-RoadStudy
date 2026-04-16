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


void preenche_vetor(int vetor[], int A, int B)
{
  int cont = 0;
  for( int i = A; i <= B; i++){
    vetor[cont] = i;
    cont ++;
  }
}

int main(void)
{
  int A, B;
  int N;

  // Lê os valores do intervalo [A, B] (a entrada garante que B >= A)
  scanf("%d%d", &A, &B);

  // Calcula o tamanho do intervalo
  N = B - A + 1;

  // Aloca um vetor de pilha com N elementos (int)
  int vetor[N];

  // Preenche e imprime o vetor
  preenche_vetor(vetor, A, B);
  imprime_vetor(vetor, N);
}