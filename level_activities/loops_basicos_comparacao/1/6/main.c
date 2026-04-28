#include <stdio.h>

double operacaoAritmetrica(double,char,double);

int main(void){
  double valor1,valor2, result;
  char op;
  
  scanf("%lf %c %lf", &valor1, &op,&valor2);
  result = operacaoAritmetrica(valor1, op, valor2);
  printf("%.2f \n", result);
  
  return 0;
}

double operacaoAritmetrica(double value1, char operation, double value2){
  double result;
  switch(operation){
    case '+':
      result = value1 + value2;
    break;
    case '-':
      result = value1 - value2;
    break; 
    case '*':
      result = value1 * value2;
    break;
    case '/':
      result = value1 / value2;
    break;
  }
  return result;
}