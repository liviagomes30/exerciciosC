/* Construa um algoritmo que calcule a quantidade de latas de tinta necessárias e o custo para pintar tanques cilíndricos de combustível, em que são fornecidos a altura e o raio desse cilindro.
Sabendo que:
•	a lata de tinta custa $ 50,00;
•	cada lata contém 5 litros;
•	cada litro de tinta pinta 3 metros quadrados.
Dados de entrada: altura (H) e raio (R).
Dados de saída: custo (C) e quantidade (QTDE).
Utilizando o planejamento reverso, sabemos que:
•	o custo é dado pela quantidade de latas * $ 50,00;
•	a quantidade de latas é dada pela quantidade total de litros/5;
•	a quantidade total de litros é dada pela área do cilindro/3;
•	a área do cilindro é dada pela área da base + área lateral;
•	a área da base é (PI * R2);
•	a área lateral é a altura * comprimento: (2 * PI * R * H);
•	sendo que R (raio) e  H (altura) são dados de entrada e PI é uma constante de valor conhecido: 3,1415. */

#include<stdio.h>
#include<math.h>
#define PI 3.1415

int main(){

        int qtdefinal;
        float H, R, custo, qtdelatas, areab, areat, areal, qtdelitros;
        printf("Digite a altura do cilindro: ");
        scanf("%f", &H);
        printf("Digite o raio do cilindro: ");
        scanf("%f", &R);
        areab = PI*pow(R,2);
        areal = 2*PI*R*H;
        areat = areal + areab;
        qtdelitros = areat/3;
        qtdelatas = qtdelitros/5;
        qtdefinal = qtdelatas;
        if(qtdelatas>qtdefinal){
            qtdefinal++;
        }
        custo = qtdefinal*50;
        printf("A quantidade de latas é: %i e o custo total é de %.2f reais", qtdefinal, custo);
        return 0;
} 