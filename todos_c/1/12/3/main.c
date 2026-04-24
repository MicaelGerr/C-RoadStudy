#include <stdio.h>

int anosbissexto(int);
int alinhamentoCentenario(int);

int main(void){
  int ano, bissexto;

  scanf("%d", &ano);
  bissexto = anosbissexto(ano);
  printf("%d", bissexto);

  return 0;
}

int anosbissexto(int base){
  int somatorio = 0;
  for (int cont = 4; cont< base; cont += 4){
    if (alinhamentoCentenario(cont)){
      
    }else{
      somatorio ++; 
    }
    printf("4*n = %d\n", cont);
    printf("somatorio = %d\n", somatorio);
    
  }
  return somatorio;
}

int alinhamentoCentenario(int ano){
  return (ano%100 == 0&& (!ano%400 == 0)? 1:0);
}

