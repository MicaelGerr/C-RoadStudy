#include <stdio.h>
#include <stdlib.h>

/* Estrutura para guardar um elemento da lista.
 */
typedef struct nodo Nodo;
struct nodo {
  int carta;
  Nodo *ant;
  Nodo *prox;
};


/* Estrutura para a lista duplamente encadeada. O ponteiro fim
 * será importante para fazer inserções no fim sem precisar 
 * percorrer a lista.
 */
typedef struct lista Lista;
struct lista {
  Nodo *ini;
  Nodo *fim;
  int tamanho;
};


/* Cria uma nova lista vazia. Você pode modificar o código para
 * introduzir um nó cabeça sentinela (recomendado!)
 */
Lista *cria_lista(void)
{
  Lista *nova = malloc(sizeof *nova);

  nova->ini = NULL;
  nova->fim = NULL;
  nova->tamanho = 0;

  return nova;
}


/* Insere um elemento (carta) na lista. Não se esqueça de atualizar
 * o contador de nós para saber facilmente quando resta apenas uma
 * carta no monte.
 */
void insere_fim(Lista *lista, int carta)
{
  Nodo *novo = // complete o código!

  novo->carta = carta;
  novo->prox = // complete o código!
  novo->ant = // complete o código!

  // complete o código para modificar o último elemento da lista
  // não se esqueça de modificar o início da lista quando ela estiver
  // vazia
}



/* Remove um elemento do início da lista e retorna o seu valor. Não
 * se esqueça de atualizar os ponteiros `ini' e `fim', nem de
 * atualizar o contador da lista.
 */
int retira(Lista *lista)
{


}


/* Retorna o tamanho da lista. Use para saber quantas cartas ainda
 * existem no monte.
 */
int tamanho(Lista *lista)
{
  return lista->tamanho;
}


int main(void)
{


}