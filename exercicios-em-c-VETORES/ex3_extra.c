#include <stdio.h>
#define TF 4

int main()
{
    int cod[TF], i, opcao, encontrou, num;
    char nome[TF][50]; // fixa o tamanho máximo da string nome em 50 caracteres
    float saldo[TF], porcent, total, movimentacao;

    for (i = 0; i < TF; i++)
    {
        printf("Digite o codigo da %da. conta: \n", i + 1);
        scanf("%d", &cod[i]);
        printf("Digite o saldo da %da. conta: \n", i + 1);
        scanf("%f", &saldo[i]);
        printf("Digite o nome do cliente da %da. conta: \n", i + 1);
        fflush(stdin);
        scanf("%s", nome[i]);
    }
    printf("MENU\n1. Efetuar deposito\n2. Efetuar saque\n3. Consultar o ativo bancario\n4. Aplicar uma porcentagem de juros mensal\n5. Finalizar programa\n");
    printf("Digite a opcao desejada: \n");
    scanf("%d", &opcao);
    while (opcao != 5)
    {
        if (opcao == 1)
        {
            printf("Digite o codigo da conta: \n");
            scanf("%d", &num);
            encontrou = 0;
            for (i = 0; i < TF; i++)
            {
                if (cod[i] == num)
                {
                    encontrou = 1;
                    printf("Digite o valor do deposito: \n");
                    scanf("%f", &movimentacao);
                    printf("Cliente: %s\n", nome[i]);
                    printf("Saldo atual: %f\n", saldo[i]);
                    saldo[i] += movimentacao;
                    printf("Novo saldo: %f\n", saldo[i]);
                }
            }
            if (encontrou == 0)
            {
                printf("Conta nao encontrada\n");
            }
        }
        if (opcao == 2)
        {
            printf("Digite o codigo da conta: \n");
            scanf("%d", &num);
            encontrou = 0;
            for (i = 0; i < TF; i++)
            {
                if (cod[i] == num)
                {
                    encontrou = 1;
                    printf("Digite o valor do saque: \n");
                    scanf("%f", &movimentacao);
                    printf("Cliente: %s\n", nome[i]);
                    printf("Saldo atual: %f\n", saldo[i]);
                    if (movimentacao > saldo[i])
                    {
                        printf("Saldo insuficiente\n");
                    }
                    else
                    {
                        saldo[i] -= movimentacao;
                        printf("Novo saldo: %f\n", saldo[i]);
                    }
                }
            }
            if (encontrou == 0)
            {
                printf("Conta nao encontrada\n");
            }
        }
        if (opcao == 3)
        {
            total = 0;
            for (i = 0; i < TF; i++)
            {
                total += saldo[i];
            }
            printf("Ativo bancario: %f\n", total);
        }
        if (opcao == 4)
        {
            printf("Digite a porcentagem de acrescimo: \n");
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