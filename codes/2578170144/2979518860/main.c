#include <stdio.h>
#include <stdlib.h>

typedef struct nodo Nodo;
struct nodo {
  int num;
  Nodo *prox;
};

typedef struct lista Lista;
struct lista {
  Nodo *prim;
  Nodo *fim;
};

Lista *lst_cria(void)
{
  Lista * lst;
  lst = (Lista*)malloc(sizeof(Lista*));
  return lst;
}

void lst_insere_prim(Lista *lst, int num)
{
  Nodo* novo_no;
  novo_no = (Nodo*) malloc(sizeof(Nodo*));
  if(novo_no == NULL){
    return;
  }
  novo_no->num = num;
  novo_no->prox = lst->prim;
  lst->prim = novo_no;
  if(lst->fim == NULL){
    Nodo* aux = lst->prim;
    while(aux->prox != NULL){
      aux = aux->prox;
    }
    lst->fim = aux;
  }
}


Nodo *lst_busca(Lista *lst, int num)
{

  /* Faça uma função que percorre a lista e procura um
   * nó que contem o número `num'. Devolva um ponteiro
   * para esse nó.
   */

  Nodo *aux = lst->prim;
  while(aux!=NULL){
    if(aux->num == num){
      return aux;
    }
    aux = aux->prox;
  }
  return NULL;

}

void lst_imprime(struct nodo *lis)
{
  if (lis == NULL)
    printf("(vazia)\n");
  else {
    printf("%d", lis->num);

    struct nodo *atual = lis->prox;
    while (atual != NULL) {
      printf(" -> %d", atual->num);
      atual = atual->prox;
    }

    printf("\n");
  }
}


int main(void)
{
  Lista *lst;
  int num;

  lst = lst_cria();

  /* Insere todos os números no início da lista, até aparecer
   * um sentinela zero.
   */
  while (scanf("%d", &num), num != 0) {
    lst_insere_prim(lst, num);
  }
  /* Procura por todos os números de consulta
   */
  while (scanf("%d", &num), num != 0) {
   
    Nodo *encontrado = lst_busca(lst, num);
    if(NULL == encontrado){
      printf("%d: nao existe", num);
    }else if(lst->prim == encontrado){
      printf("%d: inicio", num);
    }else if(lst->fim != encontrado){
       printf("%d: existe", num);
    }else{
      printf("%d: fim", num);
    }
    printf("\n");
      
  
    /* Continue o código... verifique se o ponteiro
     * `encontrado' é NULL ou se ele indica o endereço
     * de um nó que está no começo da lista, no fim
     * da lista ou em outro lugar da lista.
     */
  }
}