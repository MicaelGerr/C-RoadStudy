#include <stdio.h>

void hourFormatter(int);
int secondFormatter(int, int, int);
int diffHour(int, int);

int  main(void){
  int segundos0, minutos0, hora0;
  int segundos1, minutos1, hora1;
  int allSeconds0, allSeconds1;


  scanf("%d:%d:%d", &hora0, &minutos0, &segundos0);
  scanf("%d:%d:%d", &hora1, &minutos1, &segundos1);

  allSeconds0 = secondFormatter(hora0, minutos0, segundos0);
  allSeconds1 = secondFormatter( hora1, minutos1, segundos1);
  
  /* ajusta a linha 18*/
  
  
  hourFormatter(diffHour(allSeconds0, allSeconds1));
  return 0;
}

int diffHour(int horario, int timer){
  int result;
  if(horario+timer>=86400){
    result = horario+timer - 86400;
  }else{
    result = horario+timer;
  }
  return result;
}

int secondFormatter(int hour, int minutes, int seconds){
  return hour * 3600 + minutes * 60 + seconds;
}

void hourFormatter(int seconds){
  int hour, minutes;

  hour = seconds/3600;
  seconds = seconds%3600;
  minutes = seconds/60;
  seconds = seconds%60; 
  printf("%02d:%02d:%02d \n", hour, minutes, seconds);
  
}