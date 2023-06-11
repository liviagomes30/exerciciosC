#include <stdio.h>
#define TF 5

int main(){
  char vetNome[TF][30];
  int vetTempo[TF],i;
  float vetSalario[TF];

  for(i = 0; i < TF; i++){
    printf("Digite o nome do %do. funcionario: ",i+1);
    fflush(stdin);
    gets(vetNome[i]);
    printf("Digite o tempo de servico: ");
    scanf("%d",&vetTempo[i]);
    printf("Digite o salario: ");
    scanf("%f",&vetSalario[i]);
  }

  printf("Funcinarios que nao terao aumento:\n");
  for(i=0; i< TF; i++){
    if(vetSalario[i] > 400 && vetTempo[i] < 5){
      printf("%s\n",vetNome[i]);
    }
  }


  printf("\n");
  for(i=0; i < TF; i++){
    if(vetSalario[i] < 400 || vetTempo[i] > 5){
      if(vetSalario[i] < 400 && vetTempo[i] > 5){
        vetSalario[i] = vetSalario[i]*1.35;
        printf("Nome: %s\n",vetNome[i]);
        printf("Novo salario: %.2f\n",vetSalario[i]);
      }else if(vetTempo[i] > 5){
        vetSalario[i] = vetSalario[i]*1.25;
        printf("Nome: %s\n",vetNome[i]);
        printf("Novo salario: %.2f\n",vetSalario[i]);
      }else{
        vetSalario[i] = vetSalario[i]*1.15;
        printf("Nome: %s\n",vetNome[i]);
        printf("Novo salario: %.2f\n",vetSalario[i]);
      }
    }
  }
}