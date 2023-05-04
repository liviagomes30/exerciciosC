/* Construa um algoritmo que seja capaz de concluir qual dentre os animais seguintes foi escolhido, através de perguntas e respostas. Animais possíveis: leão, cavalo, homem, macaco, morcego, baleia, avestruz, pingüim, pato, águia, tartaruga, crocodilo e cobra.

Exemplo:
É mamífero? Sim.
É quadrúpede? Sim.
É carnívoro? Não.
É herbívoro? Sim.
Então o animal escolhido foi o cavalo. */


#include <stdio.h>
 
int main()
{
 
    //Definição das variáveis
    int tipo, mam, ave, rep, tipom, tipoa;
 
    //Loop de execução
    while(1)
    {
        //Aqui as variáveis são zeradas. Isso garante que nenhum passo será pulado por uma prévia existência de dados na variável.
        tipo = 0;
        mam = 0;
        ave = 0;
        rep = 0;
        tipom = 0;
 
        //Primeiro menu de escolha
        printf("Escolha a classificacao de um animal:\n");
        printf("1 - Mamifero\n");
        printf("2 - Ave\n");
        printf("3 - Reptil\n");
        printf("4 - Sair\n");
        scanf("%d", &tipo);
 
        //Classifica a resposta da pergunta
        if(tipo == 1)
        {
            //Opções para mamíferos
            printf("\nEscolha uma das opcoes abaixo:\n");
            printf("1 - Quadrupede\n");
            printf("2 - Bipede\n");
            printf("3 - Voador\n");
            printf("4 - Aquatico\n");
            scanf("%d", &mam);
            if(mam == 1)
            {
                printf("\nEscolha uma das opcoes abaixo:\n");
                printf("1 - Carnivoro\n");
                printf("2 - Herbivoro\n");
                scanf("%d", &tipom);
                if(tipom == 1)
                {
                    printf("\nO animal escolhido e o leao!\n\n");
                }
                else if(tipom == 2)
                {
                    printf("\nO animal escolhido e o cavalo!\n\n");
                }
                else
                {
                    printf("Opcao invalida.\n\n");
                }
            }
            else if(mam == 2)
            {
                printf("\nEscolha uma das opcoes abaixo:\n");
                printf("1 - Onivoro\n");
                printf("2 - Frutivoro\n");
                scanf("%d", &tipom);
                if(tipom == 1)
                {
                    printf("\nO animal escolhido e o homem!\n\n");
                }
                else if(tipom == 2)
                {
                    printf("\nO animal escolhido foi o macaco!\n\n");
                }
                else
                {
                    printf("Opcao invalida.\n\n");
                }
            }
            else if(mam == 3)
            {
                printf("\nO animal escolhido foi o morcego!\n\n");
            }
            else if(mam == 4)
            {
                printf("\nO animal escolhido foi a baleia!\n\n");
            }
            else
            {
                printf("Opcao invalida.\n\n");
            }
        }   
 
        else if(tipo == 2)
        {
            //Opções para aves
            printf("\nEscolha uma das opcoes abaixo:\n");
            printf("1 - Nao Voadoras\n");
            printf("2 - Nadadoras\n");
            printf("3 - De Rapina\n");
            scanf("%d", &ave);
            if(ave == 1)
            {
                printf("\nEscolha uma das opcoes abaixo:\n");
                printf("1 - Tropicais\n");
                printf("2 - Polares\n");
                scanf("%d", &tipoa);
                if(tipoa == 1)
                {
                    printf("\nO animal escolhido foi o avestruz!\n\n");
                }
                else if(tipoa == 2)
                {
                    printf("\nO animal escolhido foi o pinguim!\n\n");
                }
                else
                {
                    printf("Opcao invalida.\n\n");
                }
            }
            else if(ave == 2)
            {
                printf("\nO animal escolhido foi o pato!\n\n");
            }
            else if(ave == 3)
            {
                printf("\nO animal escolhido foi a aguia!\n\n");
            }
            else
            {
                printf("Opcao invalida.\n\n");
            }
        }
 
        //Opções pra répteis
        else if(tipo == 3)
        {
            printf("\nEscolha uma das opcoes abaixo:\n");
            printf("1 - Com casco\n");
            printf("2 - Carnivoro\n");
            printf("3 - Sem patas\n");
            scanf("%d", &rep);
            if(rep == 1)
            {
                printf("\nO animal escolhido foi a tartaruga!\n\n");
            }
            else if(rep == 2)
            {
                printf("\nO animal escolhido foi um crocodilo!\n\n");
            }
            else if(rep == 3)
            {
                printf("\nO animal escolhido foi uma cobra!\n\n");
            }
            else
            {
                printf("Opcao invalida.\n\n");
            }
        }
 
        //Esse bloco de código, quando executado, finaliza o loop do while.
        else if(tipo == 4)
        {
            break;
        }
 
        else
        {
            printf("Opcao invalida.\n\n");
        }
    }
    return 0;
}