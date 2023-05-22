#include <stdio.h>

int main(){
  float notasAlunos[4][4], mediaAlunos[4],media=0;
  int i,j;

  for(i=0; i<4;i++){
    for(j=0; j<4; j++){
      printf("Digite a nota %d do aluno %d: ",j+1,i);
      scanf("%f",&notasAlunos[i][j]);
      media += notasAlunos[i][j];
    }
    mediaAlunos[i] = media / j;
    media = 0;
  }
  for(i=0; i<4; i++){
    printf("Media do aluno %d: %.2f\n",i,mediaAlunos[i]);
  }
}