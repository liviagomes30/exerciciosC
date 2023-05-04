/*
Existem os diversos tipos de roupas, para cada tipo de roupa são anotados a Cor, a Quantidade Vendida e o Preço Unitário. Para finalização das vendas de cada roupa, é digitado o caractere em branco, para a finalização de todas as vendas é digitado o número zero.

Seu programa deverá conhecer estes dados, calcular o Total Parcial e o Total e resolver os seguintes itens:
a) qual a quantidade de tipos de roupas;
b) qual a cor que obteve a maior quantidade vendida em cada tipo de roupa;
c) qual a cor do menor preço unitário em cada tipo de roupa;
d) qual o tipo de roupa que obteve um maior total.
*/
#include <stdio.h>

int main()
{
    int cod, qtde, num_venda,cont_roupa=0, total_roupa, cod_maior, maior_qtde;
    char cor,cor_maior, cor_menor;
    float precoU, menor_preco, maior_total=0, total_item;
    
    printf("Digite o numero da venda: \n");
    scanf("%d",&num_venda);

    while(num_venda>0)
    {
        printf("Digite o codigo da roupa: \n");
        scanf("%d", &cod);
        cont_roupa++;
        printf("Digite a cor da roupa, por meio de uma letra: \n");
        fflush(stdin);
        scanf("%c", &cor);
        
        maior_qtde=0, total_roupa=0;
        
        while(cor != ' ')
        {
            
            printf("Digite a quatidade: \n");
            scanf("%d", &qtde);
            printf("Digite o preco unitario: \n");
            scanf("%f", &precoU);
            if (total_roupa == 0)
                menor_preco = precoU;
            total_item = qtde*precoU;
            printf("Total do item: %.2f\n", total_item);
            if(qtde > maior_qtde)
            {
                maior_qtde = qtde;
                cor_maior = cor;
            }
            if(precoU <= menor_preco)
            {
                menor_preco = precoU;
                cor_menor = cor;
            }
            total_roupa += total_item;
            printf("Digite a cor da roupa, por meio de uma letra: \n");
            fflush(stdin);
            scanf("%c", &cor);
        }
        printf("A cor %c obteve a maior quantidade vendida do tipo %d\n",cor_maior,cod);
        printf("A cor %c tem o menor preco unitario do tipo %d\n",cor_menor,cod);
        
        if(total_roupa > maior_total)
        {
            maior_total = total_roupa;
            cod_maior = cod;
        }
        printf("Digite o numero da venda: \n");
        scanf("%d",&num_venda);
    }
    printf("A roupa %d obteve o maior total\n", cod_maior);
    printf("Existem %d tipos de roupa\n", cont_roupa);
        
}

