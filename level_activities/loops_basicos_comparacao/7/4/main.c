#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char**alocacaoDinamicaDupla(int);
void printVetor(char**,int);
void preencheVetor(char**,int);
int compara(char*, char*);
void analisaDicionario(char**,int);
void upperString(char*, int);


int main(void){
  int numDicionario, numConsulta, flagConsulta;
  char **dicionario;
  char **consulta;
  /* área do dicionario*/
  scanf("%d", &numDicionario);
  dicionario = alocacaoDinamicaDupla(numDicionario);
  preencheVetor(dicionario, numDicionario);
  /*printVetor(dicionario, numDicionario);*/
  
  /* ^area da consulta ^*/
  scanf("%d", &numConsulta);
  consulta = alocacaoDinamicaDupla(numConsulta);
  preencheVetor(consulta, numConsulta);
  /*printVetor(consulta, numConsulta); */

  for(int i = 0; i<numConsulta; i++){
    flagConsulta = 0;
    for(int j = 0; j<numDicionario; j++){
      if(compara(dicionario[j], consulta[i])){
        flagConsulta = 1;
      }
    }
    upperString(consulta[i], 5);
    printf("%s ", consulta[i]);
    if(flagConsulta){
      printf("ok\n");
    }else{
      printf("nao existe\n");
    }
  }
  
  return 0;
}

void upperString(char *vetor, int lim){
  for(int cont = 0; cont< lim; cont++){
    vetor[cont] = toupper(vetor[cont]);
  }
}

char**alocacaoDinamicaDupla(int valuex){
 char **vetorDinamico;
  vetorDinamico = malloc((sizeof vetorDinamico) * valuex);
  for(int cont = 0; cont<valuex; cont++){
    *(vetorDinamico+cont) = malloc((sizeof *vetorDinamico)*6);
  }
  return vetorDinamico;
}

void printVetor(char **x, int lim){
  for(int cont =0; cont<lim; cont++)
    printf("%s \n", *(x+cont));
}

void preencheVetor(char **x, int lim){
  for(int cont =0; cont<lim; cont++)
    scanf("%s",*(x+cont));
 
  return;
}

int compara(char *x, char *y){

  for( int cont = 0; cont<5;cont++)
    if((tolower(x[cont]))!=tolower(y[cont])){
      return 0;
    }
  return 1;
}
