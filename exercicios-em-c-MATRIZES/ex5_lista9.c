// Faça um algoritmo que carregue uma matriz com números reais, calcule e exiba a soma dos elementos da diagonal principal.

#include <stdio.h>
#define TF 3

// 0,0    0,1   0,2
// 1,0    1,1   1,2
// 2,0    2,1   2,2

int main(){
  int mat[TF][TF],i,j,soma=0;
  for(i = 0; i < TF; i++){
    for(j=0; j < TF; j++){
      printf("Digite o elemento %d,%d da matriz: ",i,j);
      scanf("%d",&mat[i][j]);
    }
  }
  for(i = 0; i < TF; i++){
    for(j=0; j < TF; j++){
      if(i == j)
        soma += mat[i][j];
    }
  }

  printf("Soma da diagonal principal: %d\n", soma);
}
