#include <stdio.h>


int conta_collatz(int num)
{ int result;
  if(num == 1){
    result = 1;
  }else{
    num = num%2 == 0?num/2: 3*num+1;
    result = conta_collatz(num) + 1;
    
  }
  return result; // substitua pelo seu código
}

int main(void)
{
  int value;
  scanf("%d", &value);
  printf("%d\n",conta_collatz(value));
  // substitua pelo seu código
}