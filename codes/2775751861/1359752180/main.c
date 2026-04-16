#include <stdlib.h>
#include <stdio.h>

int main(void){
  int largura, altura;
  scanf("%d%d",&altura, &largura );

  int vetor[largura][altura];

  for(int j = 0; j< altura; j++)
    for(int i = 0; i<largura;i++)
      scanf("%d", &vetor[i][j]);    

  for(int i = 0; i<largura;i++){
    for(int j = 0; j< altura; j++){
      printf("%d ",vetor[i][j]);    
    }
    printf("\n");
  }
  printf("diagonal:");
  for(int j = 0; j< altura; j++){
    for(int i = 0; i<largura;i++){
      if(i == j ){
        printf(" %d", vetor[i][j]);
      }
    }
   
  }
 
  
    
}