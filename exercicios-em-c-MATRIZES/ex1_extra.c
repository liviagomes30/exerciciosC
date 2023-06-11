#include <stdio.h>
#include <string.h>

#define TFM 4
#define TFU 4

int main(){
  char vetNome[TFM][25];
  int matDist[TFM][TFM], vetCid[TFU], Nlinha, Ncidade, L, C, i, dist, maior = 0, menor = 9999, Nlinha_maior, Nlinha_menor;

  // Leitura do vetor com nomnes das cidades
  for(L=0; L < TFM; L++){
    printf("Digite a %da. cidade: ",L+1);
    gets(vetNome[L]);
  }

  // Leitura da matriz de distância
  for(L=0; L < TFM - 1; L++){
    for(C = L+1; C < TFM; C++){
      printf("Distancia da cidade %d-%s p/ %d-%s: ",L,vetNome[L],C,vetNome[C]);
      scanf("%d",&matDist[L][C]);
      matDist[C][L] = matDist[L][C];
    }
  }

  // Leitura das linhas interestaduais
  printf("Numero da linha: ");
  scanf("%d",&Nlinha);

  while(Nlinha != 9999){
    printf("Numero de cidades percorridas: ");
    scanf("%d",&Ncidade);
    for(i=0; i<Ncidade; i++){
      printf("Codigo da %da. cidade: ",i+1);
      scanf("%d",&vetCid[i]);
    }
    // Calculo da distância da linha
    dist=0;
    for(i=0; i<Ncidade-1;i++){
      L = vetCid[i];
      C = vetCid[i+1];
      dist += matDist[L][C];
    }
    printf("Distancia = %d\n",dist);
    
    if(dist > maior){
      maior = dist;
      Nlinha_maior = Nlinha;
    }

    if(dist < menor){
      menor = dist;
      Nlinha_menor = Nlinha;
    }

    printf("Numero da linha: ");
    scanf("%d",&Nlinha);
    
  }

  printf("Linha com a maior distancia: %d\n",Nlinha_maior);
  printf("Linha com a menor distancia: %d\n",Nlinha_menor);

}