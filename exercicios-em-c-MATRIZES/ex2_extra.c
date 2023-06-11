#include <stdio.h>
#define TF 12


int main(){
  int mat[TF][TF], L, C, menor,soma=0,cont=0;
  float media;

  for(L = 0; L < TF; L++){
    for(C = 0; C < TF; C++){
      printf("Digite o elemento %d,%d da matriz: ",L,C);
      scanf("%d", &mat[L][C]);
    }
  }

  for(L = 0; L < TF; L++){
    for(C = TF - 1 - L; C < TF; C++){
      if( L == 0 && C ==0){
        menor = mat[L][C];
      }
      if(mat[L][C] < menor){
        menor = mat[L][C];
      } 
    }
  }

  printf("O menor elemento da matriz (area hachurada): %d\n", menor);
  printf("Posicoes em que o elemento aparece:\n");
  for(L = 0; L < TF; L++){
    for(C=0; C < TF; C++){
      if(mat[L][C] == menor){
        printf("Linha %d, Coluna %d\n",L,C);
      }
    }
  }

  for(L = 0; L < TF/2 - 1; L++){
    for(C = L + 1; C < TF - 1 - L; C++){
      soma += mat[L][C];
      cont++;
    }
  }

  for(L = TF/2 + 1; L < TF; L++){
    for(C = TF/2 - 1; C < L; C++){
      soma += mat[L][C];
      cont++;
    }
  }

  media = (float)soma / cont;

  printf("Media dos elementos da area hachurada: %.2f\n", media);



}