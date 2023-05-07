// Ao ser fornecido um vetor e uma posição, retire o elemento que está nesta posição e remaneje o vetor.

#include <stdio.h>
#define TF 5

int main()
{
    int vet[TF], TL = 0, i, num;
    printf("Digite um numero para inserir no vetor: \n");
    scanf("%d", &num);
    while (TL < TF && num > 0)
    {
        vet[TL] = num;
        TL++;
        if (TL < TF)
        {
            printf("Digite um numero para inserir no vetor: \n");
            scanf("%d", &num);
        }
    }
    printf("Digite a posicao do valor que deseja retirar: \n");
    scanf("%d", &num);

    for (i = num; i < TL - 1; i++)
    {
        vet[i] = vet[i + 1];
    }

    for (i = 0; i < TL - 1; i++)
    {
        printf("%d ", vet[i]);
    }
}