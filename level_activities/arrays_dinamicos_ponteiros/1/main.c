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
int adiciona_elementos_fim(Lista* lista, int value){
  if(lista->tamanho >= lista->capacidade){
    return 0;
   }else{
    lista->tamanho++;
    *(lista->lista + lista->tamanho-1) = value;
  }
  return 1;
}

int remove_elementos(Lista* lista, int indice){
  if(lista->tamanho>0){
    int i;
    for(i = indice; i<lista->tamanho-1;i++){
      lista->lista[i] = lista->lista[i+1];
    }
    lista->lista[i] = 0;
    lista->tamanho--;
    return 1;
  }
  return 0;
}

void remover_ocorrencias(Lista* lista, int value){
  for(int i = 0; i<lista->tamanho;i++){
    if(lista->lista[i] == value){
      remove_elementos(lista, i);
    }
  }
}

void mostra_lista(Lista* lista){
  int i;
  for(i = 0; i<lista->tamanho; i++){
    printf("%d ", *(lista->lista+i));
  }
    
  return;
}

int tripla(Lista* lista){
  int i = 1;
  int contTripla = 0;
  int tripla = 0;
  
  while(tripla!=1 && i<lista->tamanho){
  
    if(lista->lista[i-1] == lista->lista[i]){
      contTripla++;
    }else{
      contTripla = 0;
    }
  
    if(contTripla == 2){
      tripla = 1;
    }
    i++;
  }
  if(tripla){
    printf("tripla");
  }else{
    printf("nada");
  }
  return 0;
}

int main(void){
  int capacidade, removido;
  scanf("%d", &capacidade);
  Lista* lista = cria_lista(capacidade);
  preenche_lista(lista);

  scanf("%d", &removido);
  remover_ocorrencias(lista, removido);
  tripla(lista);
}






