/* Ler um número N qualquer maior ou igual a 1 e menor ou igual a 50 e apresente o valor obtido da multiplicação sucessiva de N por 2 enquanto o produto for menor que 250 (N*2;N*2*2;N*2*2*2;etc..). O valor de N deverá ser checado quanto a sua validade, caso o usuário informe valor fora da faixa, o algoritmo deverá dar uma mensagem de inválido. */

#include <stdio.h>

int main()
    {
        int N, prod;
        printf("Digite o valor de N: \n");
        if(N>=1 && N<=50)
            scanf("%d",&N);
        else    
            printf("Numero invalido. Digite um numero entre 1 e 50.");
        prod = N;
        while(prod < 250)
        {
            printf("%d\n", prod);
            prod *= 2;
        }
        return 0;
    }
