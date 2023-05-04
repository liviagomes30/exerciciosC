/* Uma companhia de teatro planeja dar uma série de espetáculo. A direção calcula que, a R$ 5,00 o ingresso, serão vendidos 120 ingressos, e as despesas serão de R$ 200,00. Com uma diminuição de R$ 0,50 no preço dos ingressos, espera-se que haja um aumento de 26 ingressos vendidos. 
Fazer um algoritmo que escreva uma tabela de valores do lucro esperado em função do preço do ingresso, fazendo-se variar esse preço de R$ 5,00 a R$ 1,00 de R$ 0,50 em R$ 0,50. Escreva ainda o lucro máximo esperado, o preço e os números de ingressos correspondentes. */


#include <stdio.h>

int main()
{
    int ingressos, aumento_ingresso, ingressos_lucromax;
    float preco, despesa, lucro, lucro_max, preco_lucromax, variacao_preco;

    ingressos = 120;
    despesa = 200;
    preco = 5; 
    aumento_ingresso = 26;
    variacao_preco = 0.5;

    printf("Preco do ingresso|Numero de ingressos|Lucro\n");

    while(preco>=1)
    {   
        if (preco == 5)
        {
            lucro = (ingressos*preco) - despesa;
            lucro_max = lucro;

        }

        else 
        {
            ingressos = 120 + aumento_ingresso*((5.0 - preco)/variacao_preco);
            lucro = (ingressos*preco) - despesa;
            if (lucro > lucro_max)
            {
                lucro_max = lucro;
                ingressos_lucromax = ingressos;
                preco_lucromax = preco;
            }
        }
        printf("%.2f\t\t\t   %d\t\t\t   %.2f\n", preco, ingressos, lucro);
        preco -= 0.5;
    }

    printf("\nLucro maximo: R$ %.2f\nPreco do ingresso correspondente: R$ %.2f\nNumero de ingressos correspondente: %d\n", lucro_max, preco_lucromax, ingressos_lucromax);
}