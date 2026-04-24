#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define VAZIO 0
#define MOEDA 1
#define ZUMBI 5

struct pessoa{
  int x;
  int y ;
  int vida;
  int moedinhas;
};

int **alocacaoDinamicaDupla(int x, int y){
 int **vetorDinamico;
  vetorDinamico = malloc((sizeof vetorDinamico) * x);
  for(int cont = 0; cont<x; cont++){
    *(vetorDinamico+cont) = malloc((sizeof *vetorDinamico)*y);
  }
  return vetorDinamico;
}

void preenche_matriz(int x, int y, int **matriz)
{
  for(int j = 0; j<y; j++){
    for(int i = 0; i<x; i++){
      scanf("%d", &matriz[i][j]);
    }
  }
}

void movimentacao(struct pessoa *fulano, char input,int x, int y){
  switch(tolower(input)){
    case 'w':
          if(fulano->y>0)
            fulano->y -=1;
        /*printf("W pressionado");*/
      
    break;
    case 'a':
        if(fulano->x>0)
          fulano->x -=1;
        /*printf("A pressionado");*/
    break;
    case 's':
        if(fulano->y<y-1){
          fulano->y +=1;
        }
        /*printf("S pressionado");*/
    break;
    case 'd':
        if(fulano->x <x-1){
          fulano->x +=1;
        }
        
    break;
    default:
  }
 
}

int jogo(struct pessoa *player,int**matrizJogo, int largura, int altura, int nJogo){
    char movimentos[201];
    char scan;
    int contMovimentos = 0;
    char numero[3] = {0};
    int contNumero = 0;
    int proxAltura;
    while(scanf("%c", &scan), scan !=' ' && scan != '\0' ){
      if(isalpha(scan)){
        movimentos[contMovimentos] = scan;
        contMovimentos ++;
      }else if(isdigit(scan)){
        numero[contNumero] = scan;
        contNumero++;
      }
    }
   
    proxAltura = atoi(numero);
  
    for(int i = 0; i<contMovimentos;i++){
      if(player->vida>0){
        if(i == 0){
          switch(matrizJogo[player->x][player->y]){
            case MOEDA:
              player->moedinhas +=1;
              matrizJogo[player->x][player->y] = 0;
              break;
            case ZUMBI:
              if(player->vida >=5){
                player->vida -= 5;
              } else{
                player-> vida = 0;
              }
            default:
          }  
        }
                
        movimentacao(&(*player), movimentos[i], largura, altura);  
        switch(matrizJogo[player->x][player->y]){
          case MOEDA:
            player->moedinhas +=1;
            matrizJogo[player->x][player->y] = 0;
            break;
          case ZUMBI:
            if(player->vida >=5){
              player->vida -= 5;
            } else{
              player-> vida = 0;
            }
          default:
        }
      }
    }
    return proxAltura;
}

int main(void)
{
  
  int nJogo = 1;
  struct pessoa player = {0,0, 42, 0};
  int altura;
  int largura ;
  int **matrizJogo;

  scanf("%d %d ", &altura, &largura); /* ao contrario*/  
  if(0<largura &&  0<altura && largura<=20 && altura <=20){
    /*mapinha*/
    while(largura != 0 && altura!= 0 && largura>0 && largura<=20 && altura>0 && largura<=20){
      player.x = 0;
      player.y = 0;
      player.moedinhas = 0;
      player.vida = 42;
    
      matrizJogo = alocacaoDinamicaDupla(largura, altura);
      preenche_matriz(largura, altura, matrizJogo);
      
      altura = jogo(&player, matrizJogo, largura, altura, nJogo);
      
      printf("Jogo %d\npos: %d, %d\nmoedas: %d\nvida: %d\n", nJogo, player.y, player.x, player.moedinhas, player.vida);
      free(matrizJogo);
      scanf(" %d", &largura);
      nJogo++; 
  
    }  
  }
  
}




/*
void imprime_matriz(int x, int y, int **matriz){
  for(int j = 0; j<y; j++){
    for(int i = 0; i<x; i++){
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
}

void imprime_local_player(int x, int y, int **matriz, struct pessoa *fulano){
  for(int j = 0; j<y; j++){
    for(int i = 0; i<x; i++){
      if(fulano->y == j && fulano->x == i){
        printf("%1c ", 'x');
      }else{
        printf("%1d ", matriz[i][j]);
      }
    }
    printf("\n");
  }
}
*/

