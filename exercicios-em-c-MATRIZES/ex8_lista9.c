// Faça um algoritmo que ao receber duas matrizes, faça a multiplicação entre ambas, gerando como resultado uma terceira matriz. Deve-se verificar se as duas matrizes podem ser multiplicadas.

// o número de colunas da primeira matriz deve ser igual ao número de linhas da segunda matriz.


#include <stdio.h>
#define TFLa 2
#define TFCa 3
#define TFLb 3
#define TFCb 2

int main(){
  int mat1[TFLa][TFCa], mat2[TFLb][TFCb], mat3[TFLa][TFCb],i,j,k;

  for(i = 0; i < TFLa; i++){
    for(j=0; j < TFCa; j++){
      printf("Digite o elemento %d,%d da matriz 1: ",i,j);
      scanf("%d",&mat1[i][j]);
    }
  }

  for(i = 0; i < TFLb; i++){
    for(j=0; j < TFCb; j++){
      printf("Digite o elemento %d,%d da matriz 2: ",i,j);
      scanf("%d",&mat2[i][j]);
    }
  }

  if(TFCa == TFLb){
    for(i = 0; i < TFLa; i++){
      for(j = 0; j < TFCb; j++){
        mat3[i][j] = 0;
        for(k = 0; k < TFCa; k++){
          mat3[i][j] += mat1[i][k] * mat2[k][j];
        }
      }
    }
  }else
    printf("Nao eh possivel realizar a multiplicacao dessas matrizes.\n");

  printf("\nMatriz 1:\n");
  for(i = 0; i < TFLa; i++){
    for(j=0; j < TFCa; j++){
      printf("%d ",mat1[i][j]);
    }
    printf("\n");
  }

  printf("\nMatriz 2:\n");
  for(i = 0; i < TFLb; i++){
    for(j=0; j < TFCb; j++){
      printf("%d ",mat2[i][j]);
    }
    printf("\n");
  }

  printf("\nMatriz 3:\n");
  for(i = 0; i < TFLa; i++){
    for(j=0; j < TFCb; j++){
      printf("%d ",mat3[i][j]);
    }
    printf("\n");
  }
  



}