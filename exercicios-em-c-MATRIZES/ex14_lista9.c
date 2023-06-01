// Desenvolver um algoritmo que leia uma matriz A de uma dimensão com 10 elementos. Construir uma matriz C de duas dimensões com três colunas, onde a primeira coluna da matriz C é formada pelos elementos da matriz A somados com mais 5, a segunda coluna é formada pelo valor do cálculo fatorial de cada elemento correspondente da matriz A e a terceira e última coluna deverá ser formada pelos quadrados dos elementos correspondentes da matriz A.


#include <stdio.h>
#define TF 5

int main(){
  int A[TF], C[TF][3], i,j,fat;

  for(i = 0; i < TF; i++){
    printf("Digite o elemento %d da matriz 1: ",i);
    scanf("%d",&A[i]);
  }

  for(j = 0; j < TF; j++){
    fat=1;
    for(i = 1; i <= A[j]; i++){
      fat *= i;
    }
    C[j][1] = fat;
  }


  for(i = 0; i < TF; i++){
    C[i][0] = A[i] + 5;
    C[i][2] = A[i] * A[i];
  }

  for(i=0; i < TF; i++){
    for(j=0; j < 3; j++){
      printf("%d ",C[i][j]);
    }
    printf("\n");
  }

}