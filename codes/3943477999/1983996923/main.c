#include <stdio.h>
#include <stdlib.h>


struct nodo {
  int elem;
  struct nodo *prox;
};


// Cria uma nova lista vazia. Nesta representação, a lista vazia
// deve ser apenas um ponteiro nulo.
struct nodo *lst_cria(void)
{
  return NULL;
}


// Cria um novo nó contendo como elemento o valor passado pelo
// parâmetro `elem' e insere este novo nó no começo da lista.
// Caso a alocação seja bem-sucedida, a função deve retornar
// um ponteiro para o início da lista.
struct nodo *lst_insere_inicio(struct nodo *lis, int elem)
{
    struct nodo* novo_inicio;
    novo_inicio = (struct nodo*)malloc(sizeof(struct nodo*));
    novo_inicio->elem = elem;
  if(lis == NULL){
    lis = novo_inicio;
  }else{
    struct nodo* inicio = lis;
    novo_inicio->prox = inicio;
    lis = novo_inicio;
  }

  return lis;
}


// Percorre a lista e imprime seu conteúdo.
void lst_imprime(struct nodo *lis)
{
  if (lis == NULL)
    printf("(vazia)\n");
  else {
    printf("%d", lis->elem);

    struct nodo *atual = lis->prox;
    while (atual != NULL) {
      printf(" -> %d", atual->elem);
      atual = atual->prox;
    }

    printf("\n");
  }
}


// O programa principal lê um valor N e insere os valores
// 1, 2, 3, ..., N no início da lista. Você não deve
// modificar o programa principal. Ao invés disso, você
// deve fazer as funções lst_cria e lst_insere_inicio
// compatíveis com a definição de lista encadeada
// apresentada no começo do arquivo.
int main(void)
{
  int N;
  struct nodo *lis = lst_cria();

  scanf("%d", &N);
  for (int i = 1; i <= N; i++)
    lis = lst_insere_inicio(lis, i);

  lst_imprime(lis);
}