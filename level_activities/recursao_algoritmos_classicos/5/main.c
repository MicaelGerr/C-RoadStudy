
#include <stdio.h>

int main(void){
int mdcRecursivo(int,int);

  int value1, value2;
  while(scanf("%d %d", &value1, &value2), value1 != 0 && value2 != 0){
    printf("%d\n",mdcRecursivo(value1, value2));
  }
}

int mdcRecursivo(int value1, int value2){
  int result, resto;
  if(value1%value2 == 0){
    result = value2;
  }else{
    resto = value1%value2;
    result = mdcRecursivo(value2, resto);
  }
  return result;
}