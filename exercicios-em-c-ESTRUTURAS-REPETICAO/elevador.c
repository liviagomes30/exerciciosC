/* Pense que exista um prédio sem limites de andares, ou seja, um prédio infinito, onde existam três elevadores. Para otimizar o sistema de controle dos elevadores, foi realizado um levantamento no qual cada usuário respondia:

    •	o elevador que utilizava com maior freqüência;
    •	o andar ao qual se dirigia;
    •	o período que utilizava o elevador, entre:
            M – Matutino;
            V – Vespertino;
            N – Noturno.
Construa um algoritmo que calcule e imprima:
    •	qual é o andar mais alto a ser utilizado;
    •	qual é o elevador mais freqüentado;
    •	qual o horário mais usado de todos;
    •	qual a diferença percentual entre o mais usado dos horários e o menos usado;
    •	qual a percentagem sobre o total de serviços prestados do elevador de média utilização. */


#include <stdio.h>

int main()
{
    int elevador, andar, cont1=0, cont2=0, cont3=0, contM = 0, contN = 0, contV = 0, maior = 0, elevador_mais, total=0;
    char periodo, periodo_mais;
    float percent_mais, percent_menos, difer_percent, media_percent;

    printf("Digite o elevador utilizado com maior frequencia (1/2/3): \nDigite 0 para finalizar.\n");
    scanf("%d", &elevador);

    while (elevador > 0)
    {
        printf("Digite o andar: ");
        scanf("%d", &andar);
        printf("Digite o perido utilizado (M: Matutino, V - Vespertino, N - Noturno): ");
        fflush(stdin);
        scanf("%c", &periodo);

        if(elevador == 1)
        {
            cont1++;
        }
        if(elevador ==2)
        {
            cont2++;
        }
        if(elevador == 3)
        {
            cont3++;
        }

        if (andar > maior)
        {
            maior = andar;   
        }

        switch(periodo)
        {
            case 'm':case'M':
                contM++;
                break;
            case 'n':case'N':
                contN++;
                break;
            case 'v':case 'V':
                contV++;
                break;
        }

    
        total++; 
        printf("\nDigite o elevador utilizado com maior frequencia (1/2/3): \nDigite 0 para finalizar.\n");
        scanf("%d", &elevador);    

    }

    printf("Andar mais alto utilizado: %d\n", maior);

    if(cont1 > cont2 && cont1 > cont3)
    {
        printf("Elevador mais frequentado é o 1\n");
        elevador_mais = 1;
    }
    if(cont2 > cont1 && cont2 > cont3)
    {
        printf("Elevador mais frequentado é o 2\n");
        elevador_mais = 2;
    }
    if(cont3 > cont2 && cont3 > cont1)
    {
        printf("Elevador mais frequentado é o 3\n");
        elevador_mais = 3;
        printf("oi");
    }

    if(contM > contN && contM > contV && contN > contV)
    {
        printf("tchau");
        printf("O periodo mais utilizado eh o Matutino.\n");
        periodo_mais = 'M';
        percent_mais = (contM*0.1)/total*100;
        percent_menos = (contV*0.1)/total*100;
        difer_percent = percent_mais - percent_menos;
        media_percent = (contN*0.1)/total*100;
        printf("Porcentagem de servicos prestados no elevador de media utilizacao: %.2f", media_percent);
        printf("A diferença percentual entre o mais usado dos horarios e o menos eh: %.2f\n", difer_percent);
    }
    if(contM > contN && contM > contV && contN < contV)
    {
        printf("O periodo mais utilizado eh o Matutino.\n");
        periodo_mais = 'M';
        percent_mais = (contM*0.1)/total*100;
        percent_menos = (contN*0.1)/total*100;
        difer_percent = percent_mais - percent_menos;
        media_percent = (contV*0.1)/total*100;
        printf("Porcentagem de servicos prestados no elevador de media utilizacao: %.2f", media_percent);
        printf("A diferença percentual entre o mais usado dos horarios e o menos eh: %.2f\n", difer_percent);
    }
    if(contN > contM && contN > contV && contM > contV)
    {
        printf("O periodo mais utilizado eh o Noturno.\n");
        periodo_mais = 'N';
        percent_mais = (contN*0.1)/total*100;
        percent_menos = (contV*0.1)/total*100;
        difer_percent = percent_mais - percent_menos;
        media_percent = (contM*0.1)/total*100;
        printf("Porcentagem de servicos prestados no elevador de media utilizacao: %.2f", media_percent);
        printf("A diferença percentual entre o mais usado dos horarios e o menos eh: %.2f\n", difer_percent);
    }
    if(contN > contM && contN > contV && contM < contV)
    {
        printf("O periodo mais- utilizado eh o Noturno.\n");
        periodo_mais = 'N';
        percent_mais = (contN*0.1)/total*100;
        percent_menos = (contM*0.1)/total*100;
        difer_percent = percent_mais - percent_menos;
        media_percent = (contV*0.1)/total*100;
        printf("Porcentagem de servicos prestados no elevador de media utilizacao: %.2f", media_percent);
        printf("A diferença percentual entre o mais usado dos horarios e o menos eh: %.2f\n", difer_percent);
    }
    if (contV > contM && contV > contN && contM < contN)
    {
        printf("O periodo mais utilizado eh o Vespertino.\n");
        periodo_mais = 'V';
        percent_mais = (contV*0.1)/total*100;
        percent_menos = (contM*0.1)/total*100;
        difer_percent = percent_mais - percent_menos;
        media_percent = (contN*0.1)/total*100;
        printf("Porcentagem de servicos prestados no elevador de media utilizacao: %.2f", media_percent);
        printf("A diferença percentual entre o mais usado dos horarios e o menos eh: %.2f\n", difer_percent);
    }
    if (contV > contM && contV > contN && contM > contN)
    {
        printf("O periodo mais utilizado eh o Vespertino.\n");
        periodo_mais = 'V';
        percent_mais = (contV*0.1)/total*100;
        percent_menos = (contN*0.1)/total*100;
        difer_percent = percent_mais - percent_menos;
        media_percent = (contM*0.1)/total*100;
        printf("Porcentagem de servicos prestados no elevador de media utilizacao: %.2f", media_percent);
        printf("A diferença percentual entre o mais usado dos horarios e o menos eh: %.2f\n", difer_percent);
    }
    return 0;
}