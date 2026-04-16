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
    for(i = indice-1; i<lista->tamanho;i++){
      *(lista->lista+i) = *(lista->lista+i+1);
    }
    *(lista->lista+i) = 0;
    lista->tamanho--;
    return 1;
  }
  return 0;
}

void mostra_lista(Lista* lista){
  int i;
  if(0!=lista->tamanho){
    for(i = 0; i<lista->tamanho-1; i++){
      printf("%d, ", *(lista->lista+i));
    }
    printf("%d",*(lista->lista+i));
      
  }
  printf(".\n");
  return;
}



int main(void){
  int capacidade, removido;
  int j = 0;
  scanf("%d", &capacidade);
  Lista *listaNormal = cria_lista(capacidade);
  preenche_lista(listaNormal);
  
  scanf("%d", &capacidade);
  Lista *listaSub = cria_lista(capacidade);
  preenche_lista(listaSub);

  
  for(int i = 0;i<listaSub->tamanho;i++){
    removido = 0;
    j = 0;
    while(j<listaNormal->tamanho && removido != 1){
      if(listaNormal->lista[j] == listaSub->lista[i]){
        removido = 1;
        remove_elementos(listaNormal,j+1);
        
      }    
      j++;
    }
  }
  
  mostra_lista(listaNormal);
  
}






