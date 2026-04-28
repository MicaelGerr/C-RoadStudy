#include <stdio.h>
#include <string.h>

#define N "Norte"
#define L "Leste"
#define S "Sul"
#define O "Oeste"

void contaPassos(void);
int strCompDir( char[], char[]);

int main(void)
{
  contaPassos();
}

void contaPassos(void){
  
  int x = 0;
  int y = 0;
  int pernada = 0;
  char direcao[6];
  do{
    scanf(" %s", direcao);
    if(strCompDir(direcao,N)){
      y += 1;
    }else if(strCompDir(direcao,L)){
      x -= 1;
    }else if(strCompDir(direcao,O)){
      x += 1;
    }else{
      y -= 1;
    }
    printf("x:%d y:%d \n", x, y);
    pernada++;
  }while(!(x == 0 && y == 0));
  printf("%d passos", pernada);
}

int strCompDir( char direcao[], char diRealRef[]){
  int cont = 0;
  while(cont <5){
    if(direcao[cont] !=diRealRef[cont]){
      return 0;
    }
    cont++;
  }
  return 1;
}