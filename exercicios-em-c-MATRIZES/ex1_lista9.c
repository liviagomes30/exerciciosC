// Faça um algoritmo que carregue uma matriz 3x3 e exiba o maior elemento dessa matriz.

#include <stdio.h>
#define TF 3

int main(){
  int mat[TF][TF],i,j,maior;

  for(i = 0; i < TF; i++){
    for(j=0; j < TF; j++){
      printf("Digite o elemento %d,%d da matriz: ",i,j);
      scanf("%d",&mat[i][j]);
      if(i == 0)
        maior = mat[i][j];
      if (mat[i][j] > maior)
        maior = mat[i][j];
    }
  }
  printf("O maior elemento da matriz eh: %d\n",maior);

}
