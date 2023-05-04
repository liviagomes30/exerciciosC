/* Faça um algoritmo que receba a medida de ângulos em graus, um número inteiro. Determine e exiba o quadrante em que se localiza este ângulo. Considere os quadrantes abaixo:

Ângulo	         Quadrante
0 |--- 90	     1º Quadrante
90 |--- 180	     2º Quadrante
180 |--- 270	 3º Quadrante
270 |---| 360	 4º Quadrante
0 |---  -90	     1º Quadrante
-90 |---  -180	 2º Quadrante
-180 |---  -270	 3º Quadrante
-270 |---  -360	 4º Quadrante

	Para ângulos maiores que 360 graus, reduza ao intervalo de 0 a 360. */


#include <stdio.h>

int main() {
    int angulo;

    printf("Digite um angulo em graus: ");
    scanf("%d", &angulo);

    if((angulo >= 0 && angulo < 90) || (angulo >= -90 && angulo < 0)) {
        printf("O angulo esta no primeiro quadrante\n");
    } else if((angulo >= 90 && angulo < 180) || (angulo >= -180 && angulo < -90)) {
        printf("O angulo esta no segundo quadrante\n");
    } else if((angulo >= 180 && angulo < 270) || (angulo >= -270 && angulo < -180)) {
        printf("O angulo esta no terceiro quadrante\n");
    } else if((angulo >= 270 && angulo < 360) || (angulo >= -360 && angulo < -270)) {
        printf("O angulo esta no quarto quadrante\n");
    } else {
        printf("Angulo invalido\n");
    }

    return 0;
}

