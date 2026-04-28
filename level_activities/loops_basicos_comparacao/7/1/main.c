#include<stdio.h>
#include<math.h>

typedef struct ponto Ponto;
struct ponto {
    float x,y;
};

float norma(Ponto*);
float comprimento(int, Ponto*);

int main(void){
  int n;
  Ponto ponto;
  scanf("%d", &n);
  printf("%.2f",comprimento(n, &ponto));
  

}

float norma(Ponto* ponto){
  return sqrt((ponto->x)*(ponto->x)+(ponto->y)*(ponto->y));
}

float comprimento(int n, Ponto*  v){
  float comprimento = 0;
  Ponto anterior;
  Ponto vetor;
  
  scanf("%f %f", &(anterior.x), &(anterior.y));
  for(int i = 0; i<n -1; i++){
    scanf("%f %f", &(v->x), &(v->y));
    vetor.x = (v->x) - anterior.x;
    vetor.y = (v->y) - anterior.y;
    comprimento += norma(&vetor);
    anterior.x = v->x;
    anterior.y = v->y;
  }
  return comprimento;
}




