// strlen

#include <stdio.h>

int main(){
  char nome[15];
  int tam=0;
  printf("Digite um nome: ");
  gets(nome);
  while(nome[tam] != '\0')
    tam++;
  printf("Tamanho da string digitada: %d\n", tam);
}