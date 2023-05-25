#include <stdio.h>
#include <string.h>
#define TF 3

int main()
{
    int cod[TF], i, opcao, pos, num;
    char vetnome[TF][20],nome[20]; // fixa o tamanho máximo da string nome em 50 caracteres
    float saldo[TF], porcent, total, movimentacao;

    for (i = 0; i < TF; i++)
    {
        printf("Digite o codigo da %da. conta: ", i + 1);
        scanf("%d", &cod[i]);
        printf("Digite o saldo da %da. conta: ", i + 1);
        scanf("%f", &saldo[i]);
        printf("Digite o nome do cliente da %da. conta: ", i + 1);
        fflush(stdin);
        gets(vetnome[i]);
    }
    printf("MENU\n1. Efetuar deposito\n2. Efetuar saque\n3. Consultar o ativo bancario\n4. Aplicar uma porcentagem de juros mensal\n5. Finalizar programa\n");
    printf("Digite a opcao desejada: \n");
    scanf("%d", &opcao);
    while (opcao != 5)
    {
        switch (opcao)
        {
            case 1: 
                printf("Digite o codigo da conta: ");
                scanf("%d", &num);
                printf("Valor para depositar: ");
                scanf("%f", &movimentacao);
                pos = 0;
                while(pos < TF && num != cod[pos])
                    pos++;
                if (pos < TF){
                    printf("Nome do cliente: %s\n",vetnome[pos]);
                    printf("Saldo antes do deposito: %.2f\n",saldo[pos]);
                    saldo[pos] += movimentacao;
                }else{
                    printf("Conta inexistente.\n");
                }
                break;
            case 2:
                //procurando pelo nome
                printf("Digite o nome do cliente: ");
                fflush(stdin);
                gets(nome);
                printf("Digite o codigo da conta: ");
                scanf("%d", &num);
                printf("Digite o valor a ser sacado: ");
                scanf("%f",&movimentacao);

                //busca nome do vetor
                pos = 0;
                while(pos < TF && strcmp(nome, vetnome[pos]) != 0) //0 = iguais, 1 = primeira string maior, -1 = segunda string maior
                    pos++;
                if (pos < TF && num == cod[pos]){
                    if(movimentacao <= saldo[pos]){
                        printf("Nome do cliente: %s\n",vetnome[pos]);
                        printf("Saldo antes do saque: %.2f\n",saldo[pos]);
                        saldo[pos] -= movimentacao;
                    }else{
                        printf("Saldo insuficiente.\n");
                    }
                }else{
                    printf("Conta inexistente.\n");
                }
                break;
            case 3:
                total = 0;
                for (i = 0; i < TF; i++)
                {
                    total += saldo[i];
                }
                printf("Ativo bancario: %.2f\n", total);
                break;
            case 4:
                printf("Digite a porcentagem de acrescimo: ");
                scanf("%f", &porcent);
                porcent = (porcent / 100) + 1;
                for (i = 0; i < TF; i++)
                {
                    saldo[i] *= porcent;
                    printf("Novo saldo[%d]: %f\n", i, saldo[i]);
                }
        }
        printf("MENU\n1. Efetuar deposito\n2. Efetuar saque\n3. Consultar o ativo bancario\n4. Aplicar uma porcentagem de juros mensal\n5. Finalizar programa\n");
        printf("Digite a opcao desejada: \n");
        scanf("%d", &opcao);
    }
}