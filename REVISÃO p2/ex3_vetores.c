#include <stdio.h>
#define TF 10

int main(){
  int vetCod[TF], vetEstoque[TF],i,cod,TL=0,pos,cliente,qtde;

  printf("Digite o codigo do produto ou 0 para finalizar: ");
  scanf("%d",&cod);
  while(TL < TF && cod > 0){
    pos = 0;
    while(pos < TL && cod > vetCod[pos])
      pos++;
    
    for(i = TL; i > pos; i--){
      vetCod[i] = vetCod[i-1];
      vetEstoque[i] = vetEstoque[i-1];
    }

    vetCod[pos] = cod;
    printf("Digite a quantidade de produtos no estoque: ");
    scanf("%d", &vetEstoque[pos]);
    TL++;
    if(TL < TF){
      printf("Digite o codigo do produto ou 0 para finalizar: ");
      scanf("%d",&cod);
    }
  }

  printf("\n");
  printf("Digite o codigo do cliente: ");
  scanf("%d", &cliente);
  while(cliente != 0){
    printf("Digite o codigo do produto: ");
    scanf("%d", &cod);
    pos = 0;
    while(pos < TL && vetCod[pos] != cod)
      pos++;
    if(pos < TL){
      printf("Digite a quantidade do produto desejada: ");
      scanf("%d", &qtde);
      if(qtde <= vetEstoque[pos]){
        printf("Pedido atendido. Obrigado e volte sempre\n");
        vetEstoque[pos] -= qtde;
      }else{
        printf("Nao temos estoque suficiente dessa mercadoria\n");
      }
    }else{
      printf("Codigo inexixtente.\n");
    }
    printf("Digite o codigo do cliente: ");
    scanf("%d", &cliente);
  }
  printf("\nPRODUTO\tESTOQUE\n");
  for(i = 0; i <TL; i++){
    printf("%d\t%d\n",vetCod[i],vetEstoque[i]);
  }
}