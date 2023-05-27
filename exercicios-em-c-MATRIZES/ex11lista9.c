// Faça um algoritmo que:
// •	Receba 10 nomes de produtos e armazene-os em um vetor;
// •	Receba o estoque de cada um destes produtos em cada um dos 5 armazéns e armazene-os em uma matriz 5x10;
// •	Receba o custo dos 10 produtos e armazene-os em um outro vetor.

// Calcule e exiba:
// •	O total de itens armazenados em cada armazém;
// •	O total de itens armazenados de cada produto em todos os armazéns juntos;
// •	O custo total de cada armazém;
// •	O nome do produto e o número do armazém que possui o menor número de itens estocados;
// •	O nome do produto e o número do armazém que possui o maior número de itens estocados;
// •	O nome do produto que possui menor custo;
// •	O nome do produto que possui maior custo.



#include <stdio.h>
#define TFP 3
#define TFA 4


// i = coluna
// j = linha

int main(){
    char vetProd[TFP][20];
    int vetArmazem[TFA][TFP], i, j, somaP,menor,maior;
    float vetCusto[TFP], somaC,menorC, maiorC;

    for(i = 0; i < TFP; i++){
        printf("Digite o nome do produto %d: ",i+1);
        fflush(stdin);
        gets(vetProd[i]);
    
        for(j = 0; j < TFA; j++){
            printf("Itens no armazem %d: ",j+1);
            scanf("%d", &vetArmazem[j][i]);

            if(i == 0){
                menor = vetArmazem[j][i];
                maior = vetArmazem[j][i];
            }
            if (vetArmazem[j][i] > maior)
            {
                maior = vetArmazem[j][i];
            }
            if (vetArmazem[j][i] < menor)
            {
                menor = vetArmazem[j][i];
            }
        }

        printf("Custo do produto %d: ",i+1);
        scanf("%f",&vetCusto[i]);

        if(i == 0){
            menorC = vetCusto[i];
            maiorC = vetCusto[i];
        }
        if (vetCusto[i] > maiorC)
        {
            maiorC = vetCusto[i];
        }
        if (vetCusto[i] < menorC)
        {
            menorC = vetCusto[i];
        }
    }
  
    for(j = 0; j < TFA; j++){
        somaP = 0;
        for(i = 0; i < TFP; i++){
            somaP += vetArmazem[j][i];
        }
        printf("Quantidade total de itens do armazem %d: %d\n",j+1,somaP);
    }

    for(i = 0; i < TFP; i++){
        somaP = 0;
        for(j = 0; j < TFA; j++){
            somaP += vetArmazem[j][i];
        }
        printf("Total de itens %d em todos armazens: %d\n", i+1, somaP);
    }

    for(j = 0; j < TFA; j++){
        somaC = 0;
        for(i = 0; i < TFP; i++){
            somaC += vetArmazem[j][i] * vetCusto[i];
        }
        printf("Custo total do armazem %d: %.2f\n",j+1,somaC);
    }

    for(j = 0; j < TFA; j++){
        for(i = 0; i < TFP; i++){
            if(menor == vetArmazem[j][i]){
                printf("Nome do produto com a menor quantidade de itens: %s\n",vetProd[i]);
                printf("Quantidade disponivel: %d. Estocado no armazem %d\n",menor,j+1);
            }  
        }
    }
    for(j = 0; j < TFA; j++){
        for(i = 0; i < TFP; i++){
            if(maior == vetArmazem[j][i]){
                printf("Nome do produto com a maior quantidade de itens: %s\n",vetProd[i]);
                printf("Quantidade disponivel: %d. Estocado no armazem %d\n",maior,j+1);
            }
        }
    }

    for(i = 0; i < TFP; i++){
        if(menorC == vetCusto[i]){
            printf("Nome do produto com o menor custo: %s\n",vetProd[i]);
            printf("Custo: %.2f\n",menorC);
        }
    }

    for(i = 0; i < TFP; i++){
        if(maiorC == vetCusto[i]){
            printf("Nome do produto com o maior custo: %s\n",vetProd[i]);
            printf("Custo: %.2f\n",maiorC);
        }
    }


}