#include <stdio.h>

int main(){
  char string1[25], string2[25];
  int i = 0;

  printf("Digite a string 1: ");
  gets(string1);
  printf("Digite a string 2: ");
  gets(string2);

  while(string1[i] != '\0' && string2[i] != '\0' && string1[i] == string2[i])
    i++;

  if(string1[i] == '\0' && string2[i] == '\0')
    printf("%s eh igual a %s\n", string1, string2);
  else if(string1[i] != '\0' && string2[i] != '\0'){
    if(string1[i] < string2[i])
      printf("%s eh menor que %s\n", string1, string2);
    else
      printf("%s eh maior que %s\n", string1, string2);
  }else if(string1[i] == '\0')
    printf("%s eh menor que %s\n", string1, string2);
  else
    printf("%s eh maior que %s\n", string1, string2);
  
}