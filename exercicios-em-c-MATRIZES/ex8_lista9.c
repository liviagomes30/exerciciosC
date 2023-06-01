// Faça um algoritmo que ao receber duas matrizes, faça a multiplicação entre ambas, gerando como resultado uma terceira matriz. Deve-se verificar se as duas matrizes podem ser multiplicadas.

// o número de colunas da primeira matriz deve ser igual ao número de linhas da segunda matriz.


#include <stdio.h>
#define TF 10


int main(){
  int mat1[TF][TF], mat2[TF][TF], mat3[TF][TF],i,j,k,LA,CA,LB,CB,soma;

  printf("Dimensoes da matriz 1: ");
  scanf("%d %d",&LA,&CA);
  printf("Dimensoes da matriz 2: ");
  scanf("%d %d",&LB,&CB);

  for(i = 0; i < LA; i++){
    for(j=0; j < CA; j++){
      printf("Digite o elemento %d,%d da matriz 1: ",i,j);
      scanf("%d",&mat1[i][j]);
    }
  }

  for(i = 0; i < LB; i++){
    for(j=0; j < CB; j++){
      printf("Digite o elemento %d,%d da matriz 2: ",i,j);
      scanf("%d",&mat2[i][j]);
    }
  }

  if(CA == LB){
    for(i = 0; i < LA; i++){
      for(j = 0; j < CB; j++){
        soma = 0;
        for(k = 0; k < CA; k++){
          soma += mat1[i][k] * mat2[k][j];
        }
        mat3[i][j] = soma;
      }
    }

    printf("\nMatriz 1:\n");
    for(i = 0; i < LA; i++){
      for(j=0; j < CA; j++){
        printf("%d ",mat1[i][j]);
      }
      printf("\n");
    }

    printf("\nMatriz 2:\n");
    for(i = 0; i < LB; i++){
      for(j=0; j < CB; j++){
        printf("%d ",mat2[i][j]);
      }
      printf("\n");
    }
    
    printf("\nMatriz 3:\n");
    for(i = 0; i < LA; i++){
      for(j=0; j < CB; j++){
        printf("%d ",mat3[i][j]);
      }
      printf("\n");
    }

  }else
    printf("Nao eh possivel realizar a multiplicacao dessas matrizes.\n");


}