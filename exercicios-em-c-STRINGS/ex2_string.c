// Faça um algoritmo que leia uma frase e uma palavra, e exclua essa palavra da frase.

#include <stdio.h>
#include <string.h>

int main(){
  char frase[20], palavra[10];
  int i,j,k, tamf, tamp;
  printf("Digite uma frase: \n");
  gets(frase);
  printf("Digite uma palavra para excluir da frase: \n");
  gets(palavra);

  tamf = strlen(frase);
  tamp = strlen(palavra);

  for (i = 0; i <= tamf - tamp; i++) {
    j = 0;
    while(j < tamp && frase[i + j] == palavra[j])
      j++;

    if (j == tamp){
      for(k = i; k < tamf - tamp; k++){
          frase[k] = frase[k + tamp];
      }
      tamf -= tamp;
      frase[tamf] = '\0';

    }
  }
  
  printf("Frase modificada: %s\n", frase);
}