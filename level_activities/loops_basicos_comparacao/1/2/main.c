#include <stdio.h>

int main(void){
  int valor1, valor2, sum;
  while(scanf("%d %d", &valor1, &valor2), valor1<=valor2 && 2*valor1 != valor2){
    sum++;
  }
  printf("%d\n", sum);
}