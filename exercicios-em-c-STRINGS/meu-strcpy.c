// strcpy

#include <stdio.h>
#include <string.h>

int main(){
  char nome[15], nome2[15];
  int tam = 0;
  printf("Digite uma string: ");
  gets(nome);
  while(nome[tam] != '\0'){
    nome2[tam] = nome[tam];
    tam++;
  }
  nome2[tam] = '\0';
  printf("Conteudo do segundo vetor: %s",nome2);
}