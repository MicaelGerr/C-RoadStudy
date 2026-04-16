#include <stdio.h>

int maiorNegativo(int,int);
int menorPositivo(int, int);
void printValores(int,int);

int main(void){
  int valor, maiorN, menorP;
  
  while( scanf(" %d", &valor), valor != 0){
    maiorN = maiorNegativo(valor, maiorN);
    menorP = menorPositivo(valor,menorP);
  }
  printValores(menorP,maiorN);

  return 0;
}

int maiorNegativo(int value, int biggest){
  if (value < 0){
    if ( biggest == 0){
      biggest = value;
    }else{
      if(value>biggest){
        biggest = value;
      }
    }  
  }
  return biggest;

}

int menorPositivo(int value, int smallest){
  if (value>0){
    if ( smallest == 0){
      smallest = value;
    }else{
      if(value<smallest){
        smallest = value;  
      }
    }
  }
  return smallest;
}

void printValores(int menorP, int maiorN){
  if(menorP == 0){
    printf("- ");
  }else{
    printf("%d ", menorP);
  }
  if(maiorN == 0){
    printf("- \n");
  }else{
    printf("%d \n ", maiorN);
  }
  return;
}
