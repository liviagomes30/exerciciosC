// Faça um algoritmo que ao receber uma matriz (NxM) divida todos os elementos de uma linha pelo elemento da diagonal principal desta linha. Isso deve ocorrer para toda a matriz, e também deve ser considerada a possibilidade do elemento da diagonal principal ser igual a zero.

 #include <stdio.h>
 #define TFL 3
 #define TFC 3

 int main(){
  float mat[TFL][TFC];
  int i,j;

  for(i = 0; i < TFL; i++){
    for(j = 0; j < TFC; j++){
      printf("Digite o elemento %d,%d da matriz: ",i,j);
      scanf("%f",&mat[i][j]);
    }
  }

  for(i = 0; i < TFL; i++){
    if(mat[i][i] != 0) {
      for(j = 0; j < TFC; j++){
        if(i != j)
          mat[i][j] = mat[i][j] / mat[i][i];
      }
    }else
      printf("Elemento da diagonal principal da linha %d igual a 0\n",i);
  }

  for(i = 0; i < TFL; i++){
    for(j = 0; j < TFC; j++){
      printf("%.2f ",mat[i][j]);
    }
    printf("\n");
  }


 }
