#include <stdio.h>

int recusaoExtremamenteDesnecessaria(int);

int main(void){
  int value;
  while(scanf("%d", &value), value >= 0){
    printf("%d ",value);
    recusaoExtremamenteDesnecessaria(value)?printf("eh impar\n"):printf("eh par\n");
  }
  return 0;
}

int recusaoExtremamenteDesnecessaria(int value){
  int result;

  if(value==0){
    result = 0;
  }else{
    result = (recusaoExtremamenteDesnecessaria(value-1)?0:1);
  }
  return result;
}