#include <stdio.h>
#include <stdlib.h>


/* Estrutura para guardar um elemento da pilha.
 */
typedef struct nodo Nodo;
struct nodo {
  int valor;
  Nodo *prox;
};


/* Estrutura para a pilha, que deve ser uma lista ligada. O
 * primeiro elemento é o topo da pilha.
 */
typedef struct pilha Pilha;
struct pilha {
  Nodo *topo;
  int tamanho;
};


/* Insere um elemento no topo da pilha (ou seja, no início da
 * lista ligada)
 */
void push(Pilha *p, int valor)
{
  Nodo *novo = // complete o código!


}


/* Retorna o valor do primeiro elemento da pilha, sem alterar
 * o conteúdo da pilha. Use para saber se o topo da pilha contém
 * o valor zero ou um valor negativo.
 */
int primeiro(Pilha *p)
{
  return p->topo->valor;
}


/* Remove um elemento do topo da pilha (ou seja, retira o 
 * primeiro elemento da lista)
 */
void pop(Pilha *p)
{


}


/* Retorna o tamanho da pilha. Use para saber se é possível
 * retirnar dois elementos da pilha quando o topo for
 * um valor negativo.
 */
int tamanho(Pilha *p)
{
  return p->tamanho;
}


int main(void)
{


}