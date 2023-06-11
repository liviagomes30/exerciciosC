#include <stdio.h>
#define TF 24

int main(){
  int vetCorredor[TF], vetJanela[TF],i,op,num;

  for(i=0; i < TF; i++){
    vetCorredor[i] = vetJanela[i] = 0;
  }

  printf("MENU\n1 - vender passagem\n2 - mostrar mapa de ocupacao do onibus\n3 - encerrar\n");
  scanf("%d", &op);
  while(op != 3){
    switch(op){
      case 1:
        printf("Digite 1 para corredor ou 2 para janela: ");
        scanf("%d", &op);
        printf("Digite o numero da poltrona: ");
        scanf("%d", &num);
        i=0;
        while (i < TF && vetCorredor[i] == 1 && vetJanela[i] == 1)
          i++;
        if(i == TF){
          printf("Onibus lotado\n");
        }else{
          if(op == 1){
            if(vetCorredor[num-1] == 0){
              printf("Venda efetivada.\n");
              vetCorredor[num-1] = 1;
            }else{
              printf("Poltrona ocupada.\n");
            }
          }else if(op ==2){
            if(vetJanela[num-1] == 0){
              printf("Venda efetivada.\n");
              vetJanela[num-1] = 1;
            }else{
              printf("Poltrona ocupada.\n");
            }
          }else{
            printf("Opcao invalida.\n");
          }

        }
        break;
      case 2:
        printf("JANELA\t\t\tCORREDOR\n");
        for(i=0; i<TF; i++){
          if(vetJanela[i] == 1 && vetCorredor[i] == 1){
            printf("%d - Ocupado\t\t%d - Ocupado\n",i+1,i+1);
          }else if(vetJanela[i] == 0 && vetCorredor[i] == 1){
            printf("%d - Livre\t\t%d - Ocupado\n",i+1,i+1);
          }else if(vetCorredor[i] == 0 && vetJanela[i] == 1){
            printf("%d - Ocupado\t\t%d - Livre\n",i+1,i+1);
          }else{
            printf("%d - Livre\t\t%d - Livre\n",i+1,i+1);
          }
        }
    }
    printf("MENU\n1 - vender passagem\n2 - mostrar mapa de ocupacao do onibus\n3 - encerrar\n");
    scanf("%d", &op);
  }
}