#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
  int capacidade;
  int tamanho;
  int* lista;

} Lista;

Lista* cria_lista(int capacidade){
  Lista* lista;
  lista = malloc(sizeof(Lista));
  lista->lista = malloc(capacidade*sizeof(*(lista->lista)));
  if(lista->lista == NULL){
    return NULL;
  }
  lista->capacidade  = capacidade;
  lista->tamanho = 0;
  return lista;
}

void preenche_lista(Lista* lista){
  lista->tamanho = 0;
  for(int i = 0;i<lista->capacidade;i++){
    scanf("%d", lista->lista+i);
    lista->tamanho++;
  }
  return;
}

void mostra_lista(Lista* lista){
  int i = 0;
  printf("{%d, ", *(lista->lista+i));
  for(i = 1; i<lista->tamanho-1; i++){
    printf("%d, ", *(lista->lista+i));
  }
  printf("%d}", *(lista->lista+i));

  printf("\n");
    
  return;
}

int insertionSortAmostrado(Lista*lista){
  int j,aux;
  for(int i = 1; i<lista->tamanho;i++){
    j=i-1;
    aux = lista->lista[i];
    while(0 <= j && aux<lista->lista[j]){
      if(lista->lista[j+1] != lista->lista[j]){
        mostra_lista(lista);
      }
      lista->lista[j+1] = lista->lista[j];
      j--;
    }
    lista->lista[j+1] = aux;
    if(j+1!=i){
      mostra_lista(lista);
    }
    
  }
  return 1;
}

int main(void){
  int tamanho;
  scanf("%d", &tamanho);
  Lista* lista = cria_lista(tamanho);
  preenche_lista(lista);
  insertionSortAmostrado(lista);
  
  
}

