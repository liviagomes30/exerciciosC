#include <stdio.h>
#include <string.h>
#define TF 5

int main (){
  int vetCod[TF], TL = 0, cod, pos, i;
  char vetNome[TF][30], nome[30];

  // Leitura de vetor em ordem do cod
  printf("Digite o %do. codigo: ",TL+1);
  scanf("%d",&cod);
  while(TL < TF && cod > 0){
    printf("Digite o nome: ");
    fflush(stdin);
    gets(nome);

    //busca pos para inserir ordenadamente
    pos = 0;
    while(cod > vetCod[pos] && pos < TL)
      pos++;

    // REMANEJAMENTO
    for(i = TL; i > pos; i--){
      vetCod[i] = vetCod[i-1];
      strcpy(vetNome[i], vetNome[i-1]);
    }

    // Insere os dados
    vetCod[pos] = cod;
    strcpy(vetNome[pos], nome);
    TL++;
    if(TL < TF){
      printf("Digite o %do. codigo: ",TL+1);
      scanf("%d",&cod);
    }
  }
  printf("Codigo para excluir: ");
  scanf("%d",&cod);

  // Busca codigo no vetor
  pos = 0;
  while(pos < TL && cod != vetCod[pos])
    pos++;
  
  if(pos < TL){ // achou
    for(i = pos; i < TL - 1; i++){
      vetCod[i] = vetCod[i + 1];
      strcpy(vetNome[i],vetNome[i+1]);
    }
    TL--;
  }else{
    printf("Codigo nao encontrado\n");
  }
}