#include <stdio.h>
#include <string.h>
#define TFA 5
#define TLD 7

int main(){
  char vRA[TFA], vAluno[TFA], vCod[TLD], vDisciplina[TLD], vNota1[TLD], vNota2[TLD];
  int i,num,pos;
  int TLA=0;
  printf("Digite o RA do aluno: \n");
  scanf("%d",&num);
  for (i = 0; i < TFA; i++) {
    if (vRA[i] == num) {
      printf("Aluno já cadastrado.\n");
      printf("Digite o RA do aluno: \n");
      scanf("%d",&num);
    }else{
      vRA[TLA] = num;
      printf("Digite o nome do aluno: ");
      gets(vAluno[TLA]);
      // strcpy(vAluno[TLA], nome);
      TLA++;
    }
  }
  for (i = 0; i < TFA; i++){
    printf("ra[%d] = %d", i, vRA[i]);
    printf("nome[%d] = %d", i, vAluno[i]);
  }
}