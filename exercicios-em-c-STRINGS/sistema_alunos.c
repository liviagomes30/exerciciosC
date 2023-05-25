#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TFA 5
#define TLD 7

int main(){
  char  vAluno[TFA][20], vCod[TLD], vDisciplina[TLD], vNota1[TLD], vNota2[TLD];
  char resp;
  int vRA[TFA];
  int i,num,pos;
  int TLA=0;
  printf("Deseja cadastrar um aluno? S ou N: ");
  scanf(" %c", &resp);

  while(toupper(resp) == 'S')
  {
    printf("Digite o RA do aluno: \n");
    scanf("%d",&num);

    for (i = TLA; i < TFA; i++) {
      if (vRA[i] == num) {
        printf("Aluno já cadastrado.\n");
        printf("Digite o RA do aluno: \n");
        scanf("%d",&num);
      }else{
        vRA[i] = num;
      }
    }
    if(i == TLA){
      printf("Digite o nome do aluno: ");
      scanf("%s",vAluno[TLA]);
      fflush(stdin);
      TLA++;

    }

    printf("Deseja cadastrar um aluno? S ou N: ");
    scanf(" %c", &resp);
  }

  
  for (i = 0; i < TLA; i++){
    printf("RA[%d] = %d, Nome: %s\n", i, vRA[i], vAluno[i]);
  }
}