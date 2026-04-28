#include <stdio.h>
int multiFatorial(int,int);
void printEx(int,int);


int main(void){
  int valor, passoFatorial,result;
  
  while ( scanf("%d %d", &valor, &passoFatorial), passoFatorial != 0){
    result = multiFatorial(valor, passoFatorial);
    printf("%d", valor);
    printEx(valor, passoFatorial);
    printf(" = %d\n", result );
  }
  return 0;
}


int multiFatorial(int valor, int passo){
  int result;
  if ( valor <= passo){
    if (valor ==0){
      result = 1;
    }else{
      result = valor;
    }
  }else{
    
    result = multiFatorial(valor-passo, passo) * valor;
    /*printf("%d \n", result); */
  }
  return result;
}

void printEx(int valor, int passo){
  for(int cont =0; cont<passo; cont++){
    printf("!");
  }
  return;
}