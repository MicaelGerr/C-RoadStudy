#include <stdio.h>

int main(void){
  int value0, value1, sum;
  do{
    scanf("%d %d", &value0, &value1);
    if( value0 == 0){
      sum++;
    }
    if(  value1 ==0){
      sum++;
    }
  }while(value0 != 0 || value1 != 0);
    
  printf("%d\n", sum);
}