// :-) Faça um algoritmo que receba as vendas semanais (de um mês) de 5 vendedores de uma loja e armazene essas vendas em uma matriz. Calcule e exiba:
// •	Total de vendas do mês (4 semanas) de cada vendedor;
// •	Total de vendas de cada semana (todos os vendedores juntos);
// •	Total de vendas do mês.

#include <stdio.h> 
#define TF 5

int main(){
  int mat[TF-1][TF],i,j,total;
  for(i = 0; i < TF; i++){
    for(j = 0; j < TF-1; j++){
      printf("Digite a qtde vendida pela vendedora %d na semana %d: ", i+1, j+1);
      scanf("%d",&mat[j][i]);
    }
  }
  for(i = 0; i < TF; i++){
    total = 0;
    for(j = 0; j < TF-1; j++){
      total += mat[j][i];
    }
    printf("Total de vendas do mes da vendedora %d: %d\n",i+1,total);
  }
  for(j = 0; j < TF-1; j++){
    total = 0;
    for(i = 0; i < TF; i++){
      total += mat[j][i];
    }
    printf("Total de vendas da semana %d: %d\n",j+1,total);
  }

  total = 0;
  for(i = 0; i < TF; i++){
    for(j = 0; j < TF-1; j++){
      total += mat[j][i];
    }
  }
  printf("Total das vendas do mes: %d\n",total);


}
