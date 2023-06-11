#include <stdio.h>
#define TF 4

int main(){
  int vetQtde[TF],i,menor,maior=0;
  float vetPreco[TF],total=0;

  for(i=0; i < TF; i++){
    printf("Digite o valor unitario do %o. produto: ",i+1);
    scanf("%f",&vetPreco[i]);
    
    printf("Digite a quantidade vendida do %o. produto: ",i+1);
    scanf("%d",&vetQtde[i]);

    if(i == 0)
      menor = vetQtde[i];
    
    if(vetQtde[i] < menor)
      menor = vetQtde[i];

    if(vetQtde[i] > maior)
      maior =vetQtde[i];
  }

  for(i=0; i< TF; i++){
    printf("Produto %d:\n",i+1);
    printf("Valor unitario: %.2f\n",vetPreco[i]);
    printf("Quantidade vendida: %d\n",vetQtde[i]);
    printf("Valor total: %.2f\n", vetPreco[i]*vetQtde[i]);
    total +=vetQtde[i]*vetPreco[i];
  }

  printf("Total de todas as vendas: %.2f\n", total);
  printf("Valor da comissao paga ao vendedor: %.2f\n", (total*0.05)+400);

  for(i=0; i< TF; i++){
    if(maior == vetQtde[i]){
      printf("Valor do objeto com mais quantidades vendidas: %.2f\n", vetPreco[i]);
      printf("Aparece na posiçao: %d\n",i);
    }
  }
  
}