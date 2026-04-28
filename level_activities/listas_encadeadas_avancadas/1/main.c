#include <stdio.h>
#include <stdlib.h>


/* Sugestao de estrutura de dados para guardar a lista de programa
 * e os programas. Voce pode alterar essa estrutura como quiser,
 * mas deve implementar uma lista circular encadeada. 
 */
typedef struct programa Programa;
struct programa {
  char nome[81];
  int tempo_restante;
  Programa *ant;
  Programa *prox;
};


/* Sugestao de estrutura de dados para a lista ligada circular.
 * Observe que cada no' dessa lista e' um programa. O campo
 * num_programas pode ajudar a identificar quando a lista
 * estiver vazia.
 */
typedef struct lista Lista;
struct lista {
  Programa *prim;
  int num_programas;
};


/* Sugestao de funcao para criar uma lista. Voce pode
 * alterar, usar ou remover esta funcao.
 */
Lista *lst_criar(void)
{
  Lista *nova = malloc(sizeof *nova);
  nova->prim = NULL;
  nova->num_programas = 0;
  return nova;
}


/* Sugestao de funcao para ler a descricao de um programa e
 * retornar um novo no' para ele. Voce pode usar, modificar
 * ou remover esta funcao.
 */
Programa *ler_programa(void)
{
  Programa *novo = malloc(sizeof *novo);
  
  /* Leitura do nome do programa e leitura do
  tempo total de execucao do program */  

  scanf("%s %d", novo->nome, &(novo->tempo_restante));
  
  printf("Programa inserido: %s %d\n", novo->nome, novo->tempo_restante);
  // Atribui valores iniciais para os ponteiro do no'
  novo->ant = NULL;
  novo->prox = NULL;
  
  return novo;
}


/* Sugestao de funcao para inserir um no' no fim da lista.
 * Voce deve primeiro criar um novo programa usando a funcao
 * ler_programa() e depois passar o no' para esta funcao, que
 * so' precisara' ajustar os ponteiros para inserir no fim
 */
void lst_insere_fim(Lista *lst, Programa *nodo)
{
  if(lst->prim == NULL){
    lst->prim = nodo;
    nodo->prox = nodo;
    nodo->ant = nodo;
    lst->num_programas = 1;
    return;
    
  }
  Programa* aux = lst->prim;
  while(aux->prox != lst->prim){
    aux = aux->prox;
  }

  aux->prox = nodo;
  nodo->ant = aux;
  nodo->prox = lst->prim;
  lst->prim->ant = nodo;
  lst->num_programas++;
}


/* Sugestao de funcao para remover um no' da lista. Use
 * esta funcao para remover um no' da lista duplamente
 * encadeada.
 */
void lst_remove(Lista *lst, Programa *nodo) // o no entra com ponteiros nulos
{
  if(lst->prim == NULL){
    return;
  }else if(lst->prim == nodo){ // caso 
    if(lst->prim->prox == lst->primeiro){
      lst->prim = NULL;
    }
    free(nodo);  
    return;
  }
  Programa* aux = lst->prim;
  while(aux->prox!= lst->prim ){
    if(aux == nodo){ // analisa se tem
      Programa* removido = aux; 
      removido->ant->prox = removido->prox;
      removido->prox->ant = removido->ant;
       /*conectamos o anterior do removido
        com o depois do removido*/
      free(removido);
      return;
    }
    aux = aux->prox;
  }
  if(aux == nodo){
    Programa* removido = aux; 
    removido->ant->prox = removido->prox;
    removido->prox->ant = removido->ant;
      /*conectamos o anterior do removido
      com o depois do removido*/
    free(removido);
    return;
  }
  
}

void imprime_programas(Lista* lst){
  Programa * aux = lst->prim;
    printf("|%s<-%s->%s|\n", aux->ant->nome, aux->nome,aux->prox->nome);
    aux = aux->prox;
  while(aux !=lst->prim){
    printf("|%s<-%s->%s|\n", aux->ant->nome, aux->nome,aux->prox->nome);
    aux = aux->prox;
  }
  return;
  
}

void tempo_execucao_lista(Lista* lst, int tempoCedido){
  int tempoExecucao = 0;
  int tempoNaoUsado = 0;
  Programa * aux = lst->prim;
  while(lst->prim != NULL){
    
  }
}

int main(void)
{
  int tempoCedido;
  int quantProgramas;
  scanf("%d %d", &tempoCedido, &quantProgramas);
  printf("%0d %d\n", tempoCedido, quantProgramas);
  Lista* lst = lst_criar();
  for(int i = 0;i<quantProgramas;i++){
    lst_insere_fim(lst , ler_programa());
    printf("n:%d\n", i);

  }
  lst_remove(lst, lst->prim);
  imprime_programas(lst);


}