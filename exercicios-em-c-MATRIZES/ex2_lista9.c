// Faça um algoritmo que receba o estoque atual de 4 produtos (colunas) que estão armazenados em 4 armazéns (linhas) e coloque estes dados em uma matriz 5x4. Sendo que a última linha da matriz contém o custo de cada produto, calcule e exiba:
// •	A quantidade de itens armazenados em cada armazém;
// •	Qual armazém possui maior estoque do produto 2;
// •	Qual armazém possui menor estoque do produto 4;
// •	Qual o custo total de cada produto;
// •	Qual o custo total de cada armazém.

#include <stdio.h>
#define TF 4

int main(){
  int mat[TF+1][TF],i,j,soma,maior=0,menor;
  for(i = 0; i < TF; i++){
    for(j=0; j < TF; j++){
      printf("Digite a quantidade de produtos do tipo %d no armazem %d: ",i+1,j+1);
      scanf("%d",&mat[j][i]);
      if(j==3){
          printf("Digite o custo do produto: ");
          scanf("%d",&mat[TF][i]);
      }
    }

  }
  printf("\n");
  for(j = 0; j < TF+1; j++){
    for(i=0; i < TF; i++){
      printf("%d ",mat[j][i]);
    }
    printf("\n");
  }
  printf("\n");

  for(j=0; j < TF; j++){
    soma = 0;
    for(i=0; i < TF; i++){
      soma += mat[j][i];
    }
    printf("Quantidade de itens no armazem %d: %d\n",j+1,soma);
  }

  for(j = 0; j< TF; j++){
    if(mat[j][1] > maior)
      maior = mat[j][1];
  }

  for(j = 0; j< TF; j++){
    if(mat[j][1] == maior)
      printf("O armazem %d possui a maior qtde de itens do produto 2\n",j+1);
  }
  for(j = 0; j< TF; j++){
    if(j ==0)
      menor = mat[j][3];
    if(mat[j][3] < menor)
      menor = mat[j][3];
  }

  for(j = 0; j< TF; j++){
    if(mat[j][3] == menor)
      printf("O armazem %d possui a menor qtde de itens do produto 4\n",j+1);
  }

  for(i = 0; i < TF; i++){
    soma = 0;
    for(j = 0; j < TF; j++){
      soma += mat[j][i]*mat[TF][i];
    }
    printf("Custo total do produto %d: %d\n",i+1,soma);
  }

  for(j = 0; j < TF; j++){
    soma = 0;
    for(i = 0; i < TF; i++){
      soma += mat[j][i]*mat[TF][i];
    }
    printf("Custo total do armazem %d: %d\n",j+1,soma);
  }

}
