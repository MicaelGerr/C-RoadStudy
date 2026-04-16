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
// Remove o primeiro nó da lista encadeada e retorna um
// ponteiro para o nvo início da lista
struct nodo *lst_remove_inicio(struct nodo *lis)
{

  if(lis == NULL){
    return NULL;
  }else{
    lis = lis->prox;
    return lis;
  }
}

struct nodo *remove_inicio_absoluto(struct nodo *lis,int tamanho)
{
  for(int i = 0;i<tamanho; i++){
    lst_remove_inicio(lis);
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


// Programa principal. Verifique o enunciado.
int main(void)
{
  int N;
  struct nodo *lis = lst_cria();

  scanf("%d", &N);
  while(N!=0){
    if(N<0){
      for(int i = 0;i<(N*-1);i++)
        lis = lst_remove_inicio(lis);
    }else{
      lis = lst_insere_inicio(lis,N);  
    }
    scanf("%d", &N);
  }

  lst_imprime(lis);

}












