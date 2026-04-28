#include <stdio.h>
#include <math.h>
void margemDeErro(double doubleA, double doubleB, double valueE, double valueC);

int main(void){

  double valueA, valueB, valueE, valueC;
  scanf("%lf ", &valueA);
  scanf("%lf ", &valueB);
  scanf("%le ", &valueE);
  scanf("%lf", &valueC);
  margemDeErro( valueA, valueB, valueE, valueC);
  return 0;
}


void margemDeErro(double a, double b, double e, double c){
  double x = a+b;
  double y = c;
 
  printf("%f\n", fabs(y-x));
  if(fabs(y-x)<e){
    printf("iguais");
  }else{
    printf("diferentes");
  }
  printf("\n");
  return;
}

