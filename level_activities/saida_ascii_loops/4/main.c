#include <stdio.h>
#include <stdlib.h>

void bandeiraAscii(int);
void printLinha(int);
void printBarra(int);

int main(void){
  int n;
  scanf("%d", &n);
  printBarra(n);
  bandeiraAscii(n);
  printBarra(n);
  
}

void bandeiraAscii(int n){
  for(int i = 0; i<3*n; i++){
    printLinha(n);
    printf("\n");
  }
     
}

void printBarra(int n){
  for(int i = 0; i<3*n+4; i++)
    printf("-");
  printf("\n");
  
     
}

void printLinha ( int n ){
  int contBarra = 0;
  int troca = 0;
  for(int j = 0; j<3*n+4; j++){
    if(j == 0 || j==3*n+4-1){
      printf("|");
    } else if(contBarra == n ){
      contBarra = 0;
      printf("|");
      troca = (troca == 1?  0: 1);
    } else{
      if(troca == 0){
        printf("#");
      }else{
        printf(".");
      }
      contBarra++;
    }
    
      
  }
}


