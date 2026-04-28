#include <stdio.h>

void imprime_vetor(int *vetor, int tam){
  printf("{");
  if(tam != 0){
    int i;
    for( i = 0; i<tam-1; i++)
      printf("%d, ", *(vetor+i));
    printf("%d", vetor[i]);
  }
  printf("}");
}

void imprime_matriz(int altura, int largura, int matriz[][largura])
{ 
  int i;
  printf("{");
  for(i = 0; i<altura; i++){    
    imprime_vetor(matriz[i], largura);
    if(i != altura-1)
      printf(",\n");
  }
  printf("}\n");
}

void preenche_matriz(int altura, int largura, int matriz[][largura])
{
  for(int i = 0; i<altura; i++){
    for(int j = 0; j<largura; j++){
      scanf("%d", &matriz[i][j]);
    }
  }
}

int main(void)
{
	int altura, largura;
	scanf("%d%d", &altura, &largura);

	int matriz[altura][largura] ;

    preenche_matriz(altura, largura, matriz);
    imprime_matriz(altura, largura, matriz);


  
}