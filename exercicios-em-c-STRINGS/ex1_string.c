// Faça um algoritmo que leia uma frase e uma palavra, e conte quantas vezes essa
// palavra é encontrada na frase.

#include <stdio.h>
#include <string.h>

int main(){
  char frase[20], palavra[10];
  int contador=0;
  int i,j, tamf, tamp;
  printf("Digite uma frase: \n");
  gets(frase);
  strlwr(frase);
  printf("Digite uma palavra para encontrar na frase: \n");
  gets(palavra);
  strlwr(palavra);

  tamf = strlen(frase);
  tamp = strlen(palavra);

  for (i = 0; i <= tamf - tamp; i++) {
    j = 0;
    while(j < tamp && frase[i + j] == palavra[j])
      j++;

    if (j == tamp)
      contador++;

  }

  printf("A palavra '%s' aparece %d vezes na frase.\n", palavra, contador);
}