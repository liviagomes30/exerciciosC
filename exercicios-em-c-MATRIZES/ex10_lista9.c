// Elabore um algoritmo que, ao receber uma matriz de dimensão qualquer, atualize todas as suas posições. Onde cada posição deverá receber o fatorial do elemento correspondente.

#include <stdio.h>
#define TFL 3
#define TFC 3

int main(){
  int mat[TFL][TFC],i,j,fat,elemento;

  for(i = 0; i < TFL; i++){
    for(j=0; j < TFC; j++){
      printf("Digite o elemento %d,%d da matriz: ",i,j);
      scanf("%d",&mat[i][j]);
    }
  }

  for(i = 0; i < TFL; i++){
    for(j=0; j < TFC; j++){
      elemento = mat[i][j];
      for(fat=1; elemento > 0; elemento--){
        fat *= elemento;
      }
      mat[i][j] = fat;
    }
  }

  for(i = 0; i < TFL; i++){
    for(j = 0; j < TFC; j++){
      printf("%d ",mat[i][j]);
    }
    printf("\n");
  }


}
