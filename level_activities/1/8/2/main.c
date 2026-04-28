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
  struct nodo* novo_inicio = (struct nodo*)malloc(sizeof (struct nodo*));
  if( novo_inicio == NULL){
    return lis;
  }
  novo_inicio->elem = elem;
  novo_inicio->prox = lis;
  
  return novo_inicio;
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


// Percorre a lista procurando um nó que contenha o elemento
// passado por parâmetro e o remove. Se esse elemento não existir,
// então nada deve ser feito. Retorna sempre um ponteiro para
// o primeiro nó da lista.
struct nodo* lst_remove_elem(struct nodo *lis, int elem)
{
  if( lis == NULL){ // evita analise de proximo nulo
    return NULL;
  }
  // e se o elemento for o primeiro?
  if ( lis->elem == elem){
    return lis->prox;
    
  }
  /*Acima
    Tratamos os casos que a lista é vazia e o 
    caso do primeiro elemento da lista ser o 
    elemento a ser removido*/
  
  struct nodo* aux = lis;
  struct nodo* ant_aux;
  while(aux->prox != NULL){ // analise do prox
    ant_aux = aux;
    aux = aux->prox;
    if(aux->elem == elem){
      ant_aux->prox = aux->prox;
      free(aux);
      printf("Removido\n");
      return lis;
    }
  }
  return lis;
}




// Programa principal. Verifique o enunciado.
int main(void)
{
  int values;
  scanf("%d", &values);
  struct nodo* lista = lst_cria();
  while(values!=0){
    if(values>0){
      lista = lst_insere_inicio(lista, values);
    }else{
      lista = lst_remove_elem(lista,values*(-1));  
    }
    scanf("%d", &values);
  }

  
  lst_imprime(lista);


  
  /*while(values != 0){
    if(values>0){
      
    }
  }
  */



  

}








