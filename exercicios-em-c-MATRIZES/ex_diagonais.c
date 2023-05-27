#include <stdio.h>
#define TF 3

int main(){
  int mat[TF][TF], L, C, soma;
  for(L = 0; L < TF; L++){
    for(C = 0; C < TF; C++){
      printf("Elemento da posicao %d, %d: ",L,C);
      scanf("%d",&mat[L][C]);
    }
  }
  for(L = 0; L < TF; L++){
    for(C = 0; C < TF; C++){
      printf("%d ",mat[L][C]);
    }
    printf("\n");
  }

  //soma diagonal principal
  soma = 0;
  for(L = 0; L<TF; L++){
    soma += mat[L][L];
  }
  printf("Soma da diagonal principal = %d\n", soma);

  //soma diagonal secundária
  soma = 0;
  for(L = 0, C = TF - 1; L<TF; L++,  C--){
    soma += mat[L][C];
  }
  printf("Soma da diagonal secundaria = %d\n", soma);

  // Soma dos elementos acima da diagonal principal
  soma = 0;
  for(L = 0; L<TF-1; L++){
    for(C = L + 1; C < TF; C++){
      soma += mat[L][C];
    }
  }
  printf("Soma dos elementos acima da diagonal principal = %d\n", soma);

  // Soma dos elementos abaixo da diagonal principal
  soma = 0;
  for(L = 1; L<TF; L++){
    for(C = 0; C < L; C++){
      soma += mat[L][C];
    }
  }
  printf("Soma dos elementos abaixo da diagonal principal = %d\n", soma);

  // soma dos elementos acima da diagonal secundária
  soma = 0;
  for (L = 0; L < TF - 1; L++) {
    for (C = 0; C < TF - 1 - L; C++) {
      soma += mat[L][C];
    }
  }
  printf("Soma dos elementos acima da diagonal secundária = %d\n", soma);

// soma dos elementos abaixo da diagonal secundária
  soma = 0;
  for (L = 1; L < TF; L++) {
    for (C = TF - L; C < TF; C++) {
      soma += mat[L][C];
    }
  }
  printf("Soma dos elementos abaixo da diagonal secundária = %d\n", soma);

}


