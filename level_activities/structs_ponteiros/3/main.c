#include<stdio.h>

struct vetor{
  float x,y,z;
} typedef Vetor;

float escalar(Vetor*, Vetor*);
void escreveVetor(Vetor*);
void lerVetor(Vetor*);

int main(void){
  Vetor vetor1, vetor2;
  escreveVetor(&vetor1);
  escreveVetor(&vetor2);
  printf("%.2f\n", escalar(&vetor1, &vetor2));

}

float escalar(Vetor *v1, Vetor*v2){
  return (v1->x)*(v2->x)+(v1->y)*(v2->y)+(v1->z)*(v2->z);
}

void escreveVetor(Vetor *v){
  scanf("%f", &(v->x));
  scanf("%f", &((*v).y));
  scanf("%f", &((*v).z));

}

void lerVetor(Vetor *v){
  printf("%f ", (v->x));
  printf("%f ", ((*v).y));
  printf("%f ", ((*v).z));

}

