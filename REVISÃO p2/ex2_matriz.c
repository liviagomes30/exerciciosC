#include <stdio.h>
#define TFL 4
#define TFC 3

int main(){
  float mat[TFL][TFC],nota,menor;
  int L,C,cont;

  for(L=0; L < TFL; L++){
    for(C=0; C < TFC; C++){
      do{
        printf("Digite a nota do %do. aluno na %da. prova: ",L+1, C+1);
        scanf("%f",&nota);
      }while(nota < 0 || nota > 10);

      mat[L][C] = nota;
      
    }
  }

  printf("\n");

  for(L=0; L < TFL; L++){
    for(C=0; C < TFC; C++){
      if(C == 0)
        menor = mat[L][C];
      
      if(mat[L][C] < menor)
        menor = mat[L][C];
    }
    for(C=0; C < TFC; C++){
      if(menor == mat[L][C])
        printf("O %do. aluno obteve a menor nota na prova %d\n",L+1,C+1);
    }
  }

  printf("\n");

  for(C=0; C < TFC; C++){
    cont=0;
    for(L=0; L < TFL; L++){
      if(L == 0)
        menor = mat[L][C];
      
      if(mat[L][C] < menor)
        menor = mat[L][C];
    }
    for(L=0; L < TFL; L++){
      if(menor == mat[L][C])
        cont++;
    }
    printf("%d alunos obtiveram a menor nota na prova %d\n",cont,C+1);
  }

}
