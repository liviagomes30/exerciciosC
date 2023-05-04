/* Uma companhia de teatro planeja dar uma série de espetáculo. A direção calcula que, a R$ 5,00 o ingresso, serão vendidos 120 ingressos, e as despesas serão de R$ 200,00. Com uma diminuição de R$ 0,50 no preço dos ingressos, espera-se que haja um aumento de 26 ingressos vendidos. 
Fazer um algoritmo que escreva uma tabela de valores do lucro esperado em função do preço do ingresso, fazendo-se variar esse preço de R$ 5,00 a R$ 1,00 de R$ 0,50 em R$ 0,50. Escreva ainda o lucro máximo esperado, o preço e os números de ingressos correspondentes. */


#include <stdio.h>

int main()
{
    int soma_par=0, cont_par=0, i=1, num;
    float media;

    printf("Digite o %do. numero para realizar a media:\n",i);
    scanf("%d", &num);

    while(num != 0)
    {
        i++;
        if ((num%2)==0)
        {
            soma_par = soma_par + num;
            cont_par++;
        }
        printf("Digite o %do. numero para realizar a media:\n",i);
        scanf("%d", &num);
        
    }
    media = (float) soma_par/cont_par;
    printf("A media final eh: %.2f", media);
    return 0;
}