#include <stdio.h>
#define TF 37

int main(){
  int vetnum[TF], vetlug[TF],identidade,i,num,TL=0,op;

  printf("Digite o num do voo ou 0 para finalizar: \n");
  scanf("%d", &num);
  while(TL < TF && num > 0){
    vetnum[TL] = num;
    printf("Digite o num de lugares disponiveis: ");
    scanf("%d",&vetlug[TL]);
    TL++;
    if(TL < TF){
      printf("Digite o num do voo ou 0 para finalizar: \n");
      scanf("%d", &num);
    }
  }

  printf("MENU\n1 - consultar\n2 - fazer reserva\n3 - sair\n");
  scanf("%d", &op);

  while(op != 3){

    switch(op){
      case 1:
        printf("Digite o numero do voo que deseja consultar: ");
        scanf("%d", &num);
        
        i = 0;
        while(i < TL && vetnum[i] != num){
          i++;
        }
        if(i < TL)
          printf("Voo %d, lugares disponiveis: %d\n",vetnum[i],vetlug[i]);
        else{
          printf("Numero de voo nao encontrado.\n");
        }
        break;
      
      case 2:
        printf("Digite o numero da identidade: ");
        scanf("%d", &identidade);
        while(identidade != 9999){
          printf("Digite o numero do voo que deseja reservar: ");
          scanf("%d", &num);
          i = 0;
          while(i < TL && vetnum[i] != num){
            i++;
          }
          if(i < TL){
            if(vetlug[i] > 0){
              printf("Reserva feita com sucesso.\nIdentidade: %d\nNumero do voo: %d\n", identidade,num);
              vetlug[i]--;
            }else
              printf("Nao ha lugares disponiveis nesse voo.\n");
          }
          else
            printf("Numero de voo nao encontrado.\n");

          printf("Digite o numero da identidade: ");
          scanf("%d", &identidade);
        }
        break;
    }
    printf("MENU\n1 - consultar\n2 - fazer reserva\n3 - sair\n");
    scanf("%d", &op);
  }
}