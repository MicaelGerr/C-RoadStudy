#include <stdio.h>

void hourFormatter(int);

int  main(void){
  int segundos;
  
  
  scanf("%d", &segundos);  
  hourFormatter(segundos);
  
  return 0;
}

void hourFormatter(int seconds){
  int hour, minutes;
  while(seconds>=3600){
    hour++;
    seconds -= 3600;
  }
  while(seconds >= 60){
    minutes++;
    seconds -= 60;
  }

  printf("%02d:%02d:%02d \n", hour, minutes, seconds);
  
}