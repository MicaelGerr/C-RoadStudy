#include <stdio.h>

int awesomeSecondsFormatter(int, int, int);

int  main(void){
  int hour0, minutes0, seconds0;
  int hour1, minutes1, seconds1;
  int result, value0, value1;
  
  scanf("%d:%d:%d", &hour0,&minutes0, &seconds0);
  scanf("%d:%d:%d", &hour1, &minutes1, &seconds1);

  value0 = awesomeSecondsFormatter( hour0, minutes0, seconds0);
  value1 = awesomeSecondsFormatter( hour1, minutes1, seconds1);

  result = value0 - value1;

  result = ( result > 0 ? result : -result);

  printf("%d \n", result);
  return 0;
}

int awesomeSecondsFormatter(int hour, int minutes, int seconds){
  return (hour*3600 + minutes * 60 + seconds);  
}