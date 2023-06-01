// Faça um algoritmo que receba os valores das vendas de 5 produtos em 3 lojas distintas nos meses de junho, julho e agosto, e armazene esses valores em 3 matrizes distintas em que cada linha represente um produto e cada coluna represente uma loja.Calcule e exiba:
// •	O total vendido de cada produto em cada loja no trimestre;
// •	O total vendido de cada produto em todas as lojas no trimestre;
// •	O total vendido em cada loja no trimestre;
// •	Se todos os produtos em todas as lojas tiverem um aumento de 15%, quais seriam os novos valores do trimestre.

//    L1  L2  L3        L1  L2  L3       L1  L2  L3 
// P1  2   3   4        15  9    6       23   15  6
// P2  10  11  4        20  5    9       15   14  9
// P3  9   12  5        8   14   7       20   1    8
// P4  6   8   2        5   11   13      6    7    9
// P5  7   10  15       10   17   9      11   10   8 

#include <stdio.h>
#define TFP 2
#define TFL 3

int main(){
  float m1[TFP][TFL], m2[TFP][TFL], m3[TFP][TFL],soma=0;
  int i,j;

  for(i=0;i<TFP;i++){
    for(j=0;j<TFL;j++){
      printf("Digite o valor do produto %d na loja %d no mes de junho: ",i+1,j+1);
      scanf("%f",&m1[i][j]);
    }
  }

  
  
  for(i=0;i<TFP;i++){
    for(j=0;j<TFL;j++){
      printf("Digite o valor do produto %d na loja %d no mes de julho: ",i+1,j+1);
      scanf("%f",&m2[i][j]);
    }
  }


  for(i=0;i<TFP;i++){
    for(j=0;j<TFL;j++){
      printf("Digite o valor do produto %d na loja %d no mes de agosto: ",i+1,j+1);
      scanf("%f",&m3[i][j]);
    }
  }

 

  for(i=0;i<TFP;i++){
    for(j=0;j<TFL;j++){
      soma=0;
      soma+= m1[i][j] + m2[i][j] + m3[i][j];
      printf("Total vendido do produto %d na loja %d no trimestre: %.2f\n",i+1,j+1,soma);
    }
  }


  for(i=0;i<TFP;i++){
    soma=0;
    for(j=0;j<TFL;j++){
      soma+= m1[i][j] + m2[i][j] + m3[i][j];
    }
    printf("O total vendido do produto %d em todas as lojas no trimestre: %.2f\n",i+1,soma);
  }

  for(j=0;j<TFL;j++){
    soma=0;
    for(i=0;i<TFP;i++){
      soma+= m1[i][j] + m2[i][j] + m3[i][j];
    }
    printf("O total vendido na loja %d no trimestre: %.2f\n",j+1,soma);
  }

  printf("Novos valores da mes de junho:\n");
  for(i=0;i<TFP;i++){
    for(j=0;j<TFL;j++){
      m1[i][j] *= 1.15;
      printf("%.2f  ",m1[i][j]);
    }
    printf("\n");
  }

  printf("Novos valores da mes de julho:\n");
  for(i=0;i<TFP;i++){
    for(j=0;j<TFL;j++){
      m2[i][j] *= 1.15;
      printf("%.2f  ",m2[i][j]);
    }
    printf("\n");
  }

  printf("Novos valores da mes de agosto:\n");
  for(i=0;i<TFP;i++){
    for(j=0;j<TFL;j++){
      m3[i][j] *= 1.15;
      printf("%.2f  ",m3[i][j]);
    }
    printf("\n");
  }

}