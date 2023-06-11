#include <stdio.h>
#define TFL 3 //produto
#define TFC 3

int main(){
  char vetNome[TFL][30];
  float matPreco[TFL][TFC], vetCusto[TFL],matImposto[TFL][TFC];
  int L,C;
 
  for(L = 0; L < TFL; L++){
      printf("Digite o nome do %do. produto: ",L+1);
      fflush(stdin);
      gets(vetNome[L]);
    for(C = 0; C < TFC; C++){
      printf("Digite o preco do %do. produto na %da. loja: ",L+1,C+1);
      scanf("%f",&matPreco[L][C]);
      
      if(matPreco[L][C] <= 50)
        matImposto[L][C] = 0.05;
      else if(matPreco[L][C] > 50 && matPreco[L][C] <= 100)
        matImposto[L][C] = 0.1;
      else
        matImposto[L][C] = 0.2;

    }
    printf("Digite o custo do %do. produto: ",L+1);
    scanf("%f",&vetCusto[L]);
  }

  printf("\n");

  for(L = 0; L < TFL; L++){
      printf("Nome do produto: %s\n", vetNome[L]);
      printf("O custo de transporte eh: %.2f\n",vetCusto[L]);
    for(C = 0; C < TFC; C++){
      printf("Esse produto eh encontrado na loja %d, no valor de %.2f\n",C+1,matPreco[L][C]);
      printf("O imposto (%.1f %%) a ser pago eh: %.2f\n",matImposto[L][C]*100,matPreco[L][C]*matImposto[L][C]);
      printf("O preco final eh: %.2f\n",(matPreco[L][C]*(1+matImposto[L][C]))+vetCusto[L]);
    }
    
  }
}