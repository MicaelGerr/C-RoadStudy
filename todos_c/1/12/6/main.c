#include <stdio.h>

int bissexto(int);
int diasdomes(int,int);
int conversaoDias(int,int,int);
int diasDoMundo(int);
int epoca(void);
void diaDaSemana(void);

int main(void){
  diaDaSemana();
  return 0;
}

void diaDaSemana(void){
  switch ((epoca()+1)%7){ /* Queria que domingo fosse o primeio, logo, epoca()++ */
    case 0:
      printf("Domingo");
      break;  
    case 1:
      printf("Segunda");
      break;
    case 2:
      printf("Terca");
      break;  
    case 3:
      printf("Quarta");
      break;
    case 4:
      printf("Quinta");
      break;
    case 5:
      printf("Sexta");
    break;
    case 6:
      printf("Sabado");
  }
  printf("\n");
  return;
}

int conversaoDias(int dias, int mes, int ano){
  int sumDias =0;
  for (int cont =1; cont<mes;cont++){
    sumDias = diasdomes(cont, ano)+ sumDias;
  }
  sumDias = sumDias + dias;
  return sumDias;
}

int bissexto(int ano){
    int bissexto;
    if (ano%100 == 0 ){
      if(ano%400==0){
        bissexto =1; 
      }else{ /*caso valor multiplo de 100 mas não multiplo de 400*/
        bissexto = 0;
      }
    }else{
      if(ano%4 == 0){
        bissexto = 1;
      }else{
        bissexto = 0;
      }
    }  
  return bissexto;
}

int diasdomes(int mes, int ano)
{
  int days;
  
  switch(mes){  
    case 1: case 3: case 5:  case 7: case 8:  case 10: case 12:
      days = 31;
    break;
    case 2:
      days = (bissexto(ano)? 29:28);
    break;
    case 4: case 6: case 9: case 11:
      days = 30;
  }
    
  return days;
}

int diasDoMundo(int ano){
  int todosDias = 0;
  todosDias = 365*(ano-1);
  for (int cont =1; cont<ano;cont++){
    if(bissexto(cont)){
      todosDias++;
    }
  }
  return todosDias-1;
}

int epoca(void)
{
  int dia, mes, ano, totalDias;
  
  scanf("%d/%d/%d", &dia, &mes , &ano);
  totalDias = diasDoMundo(ano);
  totalDias += conversaoDias(dia, mes, ano); 
  
  return totalDias;
}

