// atoi

#include <stdio.h>
#include <string.h>

int main(){
  char svalor[] = "127";
  int num=0,i,mult,tam;
  tam = strlen(svalor) - 1;

  // '0' = 48
  // ...
  // '9' = 57

  for(i=tam, mult=1;i >=0; i--, mult *= 10)
    num = num + (svalor[i] - 48) * mult;
  printf("%d\n",num);
}