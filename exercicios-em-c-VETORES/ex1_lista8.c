// Faça um algoritmo que ao ser conhecido um vetor e um elemento insira ordenadamente o elemento no vetor.

#include <stdio.h>
#define TF 10

int main()
{
    int vet[TF];
    int TL = 0, num, i, pos;

    printf("Digite um numero para inserir no vetor ou 0 para finalizar: ");
    scanf("%d", &num);
    while (TL < TF && num > 0)
    {
        vet[TL] = num;
        TL++;
        if (TL < TF)
        {
            printf("Digite um numero para inserir no vetor ou 0 para finalizar: ");
            scanf("%d", &num);
        }
    }

    printf("Digite um numero para inserir: ");
    scanf("%d", &num);
    pos = 0;
    while (pos < TL && num > vet[pos])
        pos++;
    for (i = TL; i > pos; i--)
    {
        vet[i] = vet[i - 1];
    }
    vet[pos] = num;
    TL++;

    printf("\nO vetor resultante eh:\n");
    for (int i = 0; i < TL; i++)
    {
        printf("%d ", vet[i]);
    }
    printf("\n");

    return 0;
}