#include <stdio.h>

void permissaoIdade(int);

int main(void){
  int age;
  scanf("%d", &age);  
  permissaoIdade(age);
  return 0;
}


void permissaoIdade(int idade){
  if(idade < 0){
  }
  else if( idade<16){
    printf("Muito jovem \n");
  }
  else if( idade <18){
    printf("Voto permitido\n");
  }
  else if( idade < 60){
    printf("Voto obrigatorio \n");
  }
  else {
    printf("Nao precisa mais votar \n");
  }

  return;
}