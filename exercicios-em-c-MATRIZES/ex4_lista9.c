// Faça um algoritmo que carregue duas matrizes 3x4 com números inteiros, calcule e exiba a matriz resultante da soma dessas duas matrizes.

#include <stdio.h>

int main(){
  int mat1[3][4], mat2[3][4],mat3[3][4],i,j;
  for(i = 0; i < 3; i++){
    for(j=0; j < 4; j++){
      printf("Digite o elemento %d,%d da matriz 1: ",i,j);
      scanf("%d",&mat1[i][j]);
    }
  }

  for(i = 0; i < 3; i++){
    for(j=0; j < 4; j++){
      printf("Digite o elemento %d,%d da matriz 2: ",i,j);
      scanf("%d",&mat2[i][j]);
    }
  }
  for(i = 0; i < 3; i++){
    for(j=0; j < 4; j++){
      mat3[i][j] = mat2[i][j] + mat1[i][j];
    }
  }

  printf("\nMatriz 1:\n");
  for(i = 0; i < 3; i++){
    for(j=0; j < 4; j++){
      printf("%d ",mat1[i][j]);
    }
    printf("\n");
  }
  printf("\nMatriz 2:\n");
  for(i = 0; i < 3; i++){
    for(j=0; j < 4; j++){
      printf("%d ",mat2[i][j]);
    }
    printf("\n");
  }
  printf("\nMatriz 3:\n");
  for(i = 0; i < 3; i++){
    for(j=0; j < 4; j++){
      printf("%d ",mat3[i][j]);
    }
    printf("\n");
  }
}
