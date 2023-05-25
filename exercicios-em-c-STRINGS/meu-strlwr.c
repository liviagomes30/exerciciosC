// STRLWR

#include <stdio.h>

int main(){
  char nome[15];
  int i = 0;
  printf("Digite uma string: ");
  gets(nome);

  // 'A' = 65
  // ...
  // 'a' = 97
  // 97 - 65 = 32

  while(nome[i] != '\0'){
    if(nome[i] >= 'A' && nome[i] <= 'Z') // if(nome[i] >= 65 && nome[i] <= 90)
      nome[i] = nome[i] + 32;
    i++;
  }
  
  printf("String: %s\n",nome);
}