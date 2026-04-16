#include <stdio.h>


void printTabuleiro(char tabuleiro[][13]);
void jogada(int, char tabuleiro[][13]);

int main(void)
{
  // Uma matriz de caracteres ou um vetor de strings contendo o tabuleiro inicialmente vazio.
  // Observe que ela possui 22 linhas e 13 colunas. Isso é porque o tabuleiro do Tetris
  // possui 22 linhas e 12 colunas. A estrutura de dados requer uma coluna a mais para que
  // cada linha da matriz funcione como uma string (contém o byte 0 no final).
  char tabuleiro[22][13] = {
      "+----------+",
      "|..........|",
      "|..........|",
      "|..........|",
      "|..........|",
      "|..........|",
      "|..........|",
      "|..........|",
      "|..........|",
      "|..........|",
      "|..........|",
      "|..........|",
      "|..........|",
      "|..........|",
      "|..........|",
      "|..........|",
      "|..........|",
      "|..........|",
      "|..........|",
      "|..........|",
      "|..........|",
      "+----------+",
  };
  int value;
  while(scanf("%d", &value), value != 0 && value>0 && value < 10){
    jogada(value, tabuleiro);
    printTabuleiro(tabuleiro); 
  }
  
}

void printTabuleiro(char tabuleiro[][13]){
  for(int i = 0; i<22; i++){
    printf("%s", tabuleiro[i]);
    printf("\n");
  
  }
    
}

void jogada(int selectedX, char tabuleiro[][13]){
  int i = 0;
  int flagFim = 1;
  while(i<22 && flagFim){
    if(tabuleiro[1][selectedX] == '#'){
      
    } else if(tabuleiro[i][selectedX] == '#' || tabuleiro[i][selectedX+1] == '#'){
      tabuleiro[i-1][selectedX] = '#';
      tabuleiro[i-1][selectedX+1] = '#';
      tabuleiro[i-2][selectedX] = '#';
      tabuleiro[i-2][selectedX+1] = '#';
      flagFim = 0;
    }else if(i == 20){
      tabuleiro[i][selectedX] = '#';
      tabuleiro[i][selectedX+1] = '#';
      tabuleiro[i-1][selectedX] = '#';
      tabuleiro[i-1][selectedX+1] = '#';
      flagFim = 0;
    }
    i++;
  }
}

















