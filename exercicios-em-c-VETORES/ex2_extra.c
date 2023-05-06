#include <stdio.h>
#define TF 37

int main()
{
    int numVoo[TF], lug[TF], identidade, voo, TL = 0, num, i, encontrou;
    printf("Digite o num do voo ou 0 para finalizar: \n");
    scanf("%d", &num);
    while (TL < TF && num > 0)
    {
        numVoo[TL] = num;
        printf("Digite o num de lugares disponiveis: \n");
        scanf("%d", &lug[TL]);
        TL++;
        if (TL < TF)
        {
            printf("Digite o num do voo: \n");
            scanf("%d", &num);
        }
    }

    printf("Digite o numero da identidade ou 9999 para finalizar: \n");
    scanf("%d", &identidade);
    while (identidade != 9999)
    {
        printf("Digite o numero do voo que deseja reservar: \n");
        scanf("%d", &voo);
        encontrou = 0;
        for (i = 0; i < TF; i++)
        {
            if (numVoo[i] == voo)
            {
                encontrou = 1;
                if (lug[i] == 0)
                {
                    printf("Nao ha lugares disponiveis nesse voo.\n");
                }
                else
                {
                    printf("Reserva feita com sucesso.\nIdentidade: %d\nVoo: %d\n", identidade, numVoo[i]);
                    lug[i]--;
                }
            }
        }
        if (encontrou == 0)
            printf("Numero do voo invalido.\n");

        printf("Digite o numero da identidade ou 9999 para finalizar: \n");
        scanf("%d", &identidade);
    }
}