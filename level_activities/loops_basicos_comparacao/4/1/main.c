/* NAO ALTERE ESTA PARTE DO CODIGO
 */
#include <stdio.h>
#include <stdlib.h>
int codebench_exercicio_erro(void)
{
	puts("Erro! A funcao printf nao deve ser usada neste exercicio!");
	puts("Use a funcao `putchar()' para imprimir cada caracter.");
	puts("Exemplo: putchar('#'); imprime uma veze o caracter #");
	exit(EXIT_FAILURE);
}
#define printf(...) codebench_exercicio_erro()
#define puts(...) codebench_exercicio_erro()
/* NAO ALTERE O CODIGO ACIMA
 */

void printLinha(int,int,int,int);
void printLinhaCF(int);
void printParedao(int,int);

int main(void)
{
	/* Escreva seu codigo aqui. Nao use a funcao printf(). Em vez disso,
	 * use a funcao putchar() para imprimir cada caracter isoladamente.
	 */
  int x,y;
  scanf("%d%d", &x, &y);
  printParedao(y, x);
}

void printParedao(int x, int y){
  printLinhaCF(10);
  for(int i = 0; i< 20;i++){
    printLinha(x,y-1,i,10);
  }
  printLinhaCF(10);
  
}

void printLinhaCF(int n){

  for(int j = 0; j<n+2; j++){
    if(j == 0 || j==n+2-1){
      putchar('+');
    } else {
      putchar('-');
    }    
  }
  putchar('\n');
  
}



void printLinha ( int x , int y, int linha, int n){
  
  for(int j = 0; j<n+2; j++){
    if(j == 0 || j==n+2-1){
      putchar('|');
    } else if ((x == j && y == linha) || (x == j && y+1 == linha)  ){
      putchar('#');
      putchar('#');
      j++;
      
    } else{
      putchar('.');
    }
  }
  putchar('\n');
}


