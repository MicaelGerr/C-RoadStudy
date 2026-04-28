#include <stdio.h>
void values(float[], int);
float somatorio(float[], int);
void mediaPonderada(void);


int main(void){
  mediaPonderada();
}

void mediaPonderada(void){
  int tamanho;
  scanf("%d", &tamanho);
  float value[tamanho];
  values(value, tamanho);
  printf("%.2f\n",somatorio(value, tamanho));
  return;
}

void values(float values[], int tamanho){
  for (int cont = 0; cont< tamanho; cont++)
    scanf("%f", &values[cont]);
}

float somatorioComMedia(float values[], int tamanho){
  float peso, sum, pesos;
  pesos = 0;
  for (int cont = 0; cont< tamanho; cont++){
    scanf("%f", &peso );
    sum += values[cont] * peso;
    pesos += peso;
    
  }
  return (sum/((float)pesos));
}

