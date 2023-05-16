#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
  char svalorf[] = "325.93";
  float numf;
  int num=0,i,mult,tam,cont=0;
  tam = strlen(svalorf) - 1;

  // '0' = 48
  // ...
  // '9' = 57
  
  for(i=tam, mult=1;svalorf[i] != '.'; i--, mult *= 10)
  {
    num = num + (svalorf[i] - 48) * mult;
    cont++;
  }

  numf = (float)num/pow(10,cont);
  num = 0;

  for(i= i-1, mult=1;i >= 0; i--, mult *= 10)
    num = num + (svalorf[i] - 48) * mult;

  numf += num;
  printf("%.2f\n",numf);
}