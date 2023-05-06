#include <stdio.h>
#define TF 11

int main()
{
    int vetCPF[TF], i, soma = 0, resto, dig1, dig2;
    for (i = 0; i < TF; i++)
    {
        printf("Digite o %do. do CPF: \n", i + 1);
        scanf("%d", &vetCPF[i]);
    }

    for (i = 0; i < TF - 2; i++)
    {
        soma += vetCPF[i] * (TF - 1 - i);
    }

    resto = soma % 11;
    if (resto < 2)
    {
        dig1 = 0;
    }
    else
    {
        dig1 = 11 - resto;
    }

    soma = 0;
    for (i = 0; i < TF - 1; i++)
    {
        soma += vetCPF[i] * (TF - i);
    }

    resto = soma % 11;
    if (resto < 2)
    {
        dig2 = 0;
    }
    else
    {
        dig2 = 11 - resto;
    }

    if (dig1 == vetCPF[9] && dig2 == vetCPF[10])
        printf("O CPF esta correto.");
    else
        printf("O CPF esta incorreto.");
}