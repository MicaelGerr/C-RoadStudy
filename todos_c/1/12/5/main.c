#include <stdio.h>

int bissexto(int);
int diasdomes(int,int);
int conversaoDias(int,int,int);

int main(void)
{
  int dias0, mes0, ano0, sumDias0;
  int dias1, mes1,ano1,sumDias1;
  
  scanf("%d %d %d", &dias0, &mes0, &ano0 );
  sumDias0 = conversaoDias(dias0, mes0,ano0);
 
  scanf(" %d %d %d", &dias1, &mes1, &ano1 );
  sumDias1 = conversaoDias(dias1, mes1,ano1)  ;

  printf("%d\n",sumDias1-sumDias0);

  return 0;
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