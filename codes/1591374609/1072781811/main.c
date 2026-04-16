#include <stdio.h>

int faltas(int);
int notasAnalise(void);

int main(void){
  int quantMaterias, tempoMateria, presenca, boletim;
  
  scanf("%d", &quantMaterias);
  
  for (int cont = 0; cont<quantMaterias; cont++){
    scanf("%d", &tempoMateria);
    presenca = faltas(tempoMateria);
    boletim = notasAnalise();
    printf("Disciplina %d: ", cont+1);
    
    if (presenca) {
      if (boletim){
        printf("AP\n");
      }else{
        printf("RN\n");
      }  
    }else{
      printf("RF\n");
    }
    
  } 
    
  return 0;
}

int faltas(int horas){
  double  sumFaltas;
  int faltas,contHoras;
  
  contHoras = horas;
  while(contHoras !=0){
    scanf("%d",&faltas);
    sumFaltas = 2*faltas + sumFaltas;  
    contHoras = contHoras - 2;
  }
  /* printf("\n%f de falta\n", sumFaltas/horas );*/
  return ( sumFaltas/horas < 0.25 ? 1:0); /* 1=passou e 0 ->reprovado */
  
}

int notasAnalise(void){
  int cont;
  double notas, sumNotas, media;
  
  cont =0;
  while(cont<3){
    scanf("%lf", &notas);
    sumNotas = notas + sumNotas;
    cont++;
  }
  media = sumNotas/3;
  
  /*printf("\nmedia de %f\n", media);*/
  return (media>=5?1:0);
}





