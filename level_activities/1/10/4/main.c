#include <stdio.h>


int converteHora(int,int,int);

int main(void){
  int hora, minutos, segundos;
  
  scanf("%d:%d:%d", &hora, &minutos, &segundos);
  printf("%d\n", converteHora(hora, minutos, segundos));
  
  return 0;
}

int converteHora(int hour, int minutes, int seconds){
  return hour * 3600 +  minutes * 60 + seconds;
}

