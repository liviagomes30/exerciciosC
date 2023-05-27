// :-) Faça um algoritmo que carregue uma matriz com números inteiros, calcule e exiba o maior elemento da matriz com sua respectiva posição, linha e coluna. E caso, este elemento apareça várias vezes, deve-se exibir todas as posições que o mesmo se encontra.

#include <stdio.h>
#define TF 3

// 0,0    0,1   0,2
// 1,0    1,1   1,2
// 2,0    2,1   2,2

int main(){
  int mat[TF][TF],i,j,maior;
  for(i = 0; i < TF; i++){
    for(j=0; j < TF; j++){
      printf("Digite o elemento %d,%d da matriz: ",i,j);
      scanf("%d",&mat[i][j]);
      if(i == 0 && j == 0)
        maior = mat[i][j];
      if(mat[i][j] > maior){
        maior = mat[i][j];

      }
    }
  }
  printf("O maior elemento da matriz: %d\n", maior);
  printf("Posicoes em que o elemento aparece:\n");
  for(i = 0; i < TF; i++){
    for(j=0; j < TF; j++){
      if(mat[i][j] == maior){
        printf("Linha %d, Coluna %d\n",i,j);
      }
    }
  }

}
