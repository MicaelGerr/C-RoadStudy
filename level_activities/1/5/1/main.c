#include <stdio.h>

double raiz(double, double, double);
double modulo(double);

int main(void){
  int repetitions ;
  double value[3];
  scanf("%d", &repetitions);

  for(int i = 0; i<repetitions; i++){
    for(int cont = 0; cont<3; cont++){
      scanf("%lf", &value[cont]);
    }
    printf("%.5lf\n", raiz(value[0], value[1], value[2]));  
  }
  
  return 0;
}


double raiz(double x, double xo, double e){
  if(modulo(x-xo*xo)<= e){
    return xo;
  }else{
    return raiz(x,((xo*xo +x)/(2*xo)),e);
  }
}

double modulo(double x){
  return (x<0?x*(-1): x);
}