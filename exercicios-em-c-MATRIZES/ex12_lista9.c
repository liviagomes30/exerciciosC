// Conhecidas duas matrizes (MxM), calcule e exiba:
// •	A soma da primeira pela transposta da segunda;
// •	A multiplicação da segunda pela transposta da primeira;
// •	Multiplique por quatro todos os elementos da transposta da primeira, e some a matriz resultante com a transposta da segunda.

//    L1  L2  L3        L1  L2  L3       
//   2   3   4        15  9    6       
//   10  11  4        20  5    9      
//   9   12  5        8   14   7       

// transposta:
//   2  10  9          15 20 8
//   3  11  12         9  5  14
//   4   4   5         6  9  7


#include <stdio.h>
#define TFL 3
#define TFC 3

int main(){
  int mat1[3][4], mat2[TFL][TFC],mat3[TFL][TFC],i,j,k,soma;
  for(i = 0; i < TFL; i++){
    for(j=0; j < TFC; j++){
      printf("Digite o elemento %d,%d da matriz 1: ",i,j);
      scanf("%d",&mat1[i][j]);
    }
  }

  for(i = 0; i < TFL; i++){
    for(j=0; j < TFC; j++){
      printf("Digite o elemento %d,%d da matriz 2: ",i,j);
      scanf("%d",&mat2[i][j]);
    }
  }

  printf("Soma da primeira pela transposta da segunda: \n");
  for(i = 0; i < TFL; i++){
    for(j=0; j < TFC; j++){
      mat3[i][j] = mat1[i][j] + mat2[j][i];
      printf("%d ", mat3[i][j]);
    }
    printf("\n");
  }

  printf("Multiplicacao da segunda pela transposta da primeira: \n");
  for(i = 0; i < TFL; i++){
    for(j=0; j < TFC; j++){
      soma=0;
      for(k=0; k < TFC; k++){
        soma += mat2[i][k] * mat1[j][k];
      }
      mat3[i][j] = soma;
      printf("%d ", mat3[i][j]);
    }
    printf("\n");
  }

  printf("Multiplique por quatro todos os elementos da transposta da primeira, e some a matriz resultante com a transposta da segunda: \n");
  for(i = 0; i < TFL; i++){
    for(j=0; j < TFC; j++){
      mat1[j][i] *= 4;
      mat3[i][j] = mat1[j][i] + mat2[j][i];
      printf("%d ", mat3[i][j]);
    }
    printf("\n");
  }
}