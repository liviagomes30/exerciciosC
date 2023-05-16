#include <stdio.h>

int main(){
  char nome[15], sobrenome[15];
  int i = 0, j = 0;

  printf("Digite o primeiro nome: ");
  gets(nome);
  printf("Digite o primeiro sobrenome: ");
  gets(sobrenome);

  // Colocar espaço
  while(nome[i] != '\0')
    i++;
  
  nome[i] = ' ';
  i++;

  while(sobrenome[j] != '\0'){
    nome[i] = sobrenome[j];
    i++;
    j++;
  }

  nome[i] = '\0';
  printf("Nome completo: %s\n", nome);
}