#include <stdio.h>
#include <string.h>

#define strcat "NAO USE strcat"

void concatena(char*, const char*);

int main(void){
  char s1[91]; // As 3 strings concatenadas podem ter até 30 caracteres
  char s2[31];
  char s3[31];

  // Lê as 3 strings separadamente
  scanf("%s %s %s", s1, s2, s3);

  // Soma os tamanhos das strings para testar depois
  int tamanho_esperado = strlen(s1) + strlen(s2) + strlen(s3);

  // Concatena a segunda string à primeira
  concatena(s1, s2);

  // Concatena a terceira string às duas primeiras
  concatena(s1, s3);

  // Testa o tamanho da string resultante. Caso seja diferente do esperado,
  // então algo está errado na função concatena()
  int tamanho_obtido = strlen(s1);
  if (tamanho_obtido != tamanho_esperado) {
    printf("Tamanho da string: %d\n", tamanho_obtido);
    printf("Tamanho esperado: %d\n", tamanho_esperado);
  }

  // Imprime a string concatenada
  puts(s1);
}

void concatena(char *dest, const char *orig){
  int i = 0;
  int j = 0;
  while(dest[i] != '\0')
    i++;
  
  while( orig[j] != '\0')
    dest[i++] = orig[j++];
  dest[i] = orig[j];

}
