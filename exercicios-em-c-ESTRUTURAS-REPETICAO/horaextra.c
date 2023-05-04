/* Uma empresa decidiu dar uma gratificação de Natal aos seus funcionários, baseada no número de horas extras e no número de horas que o funcionário faltou ao trabalho. O valor do prêmio é obtido pela consulta na tabela a seguir, em que:
H = (Número de horas extras) – (2/3 * (Números de horas-falta))

H (minutos)	       Prêmio (R$)
> 2400	           500,00
1800 ---| 2400	   400,00
1200 ---| 1800	   300,00
600 ---| 1200	   200,00
< = 600	           100,00

Faça um algoritmo que receba o número de horas extras e o número de horas-falta em minutos de todos os funcionários. Exiba o número de horas extras e o número de horas-falta em horas, e o valor do prêmio. */



#include <stdio.h>

int main() {
    int horas_extras, horas_falta;
    float h, premio;

    printf("Digite o numero de horas extras em minutos: ");
    scanf("%d", &horas_extras);

    printf("Digite o numero de horas falta em minutos: ");
    scanf("%d", &horas_falta);

    h = (horas_extras/60.0) - (2.0/3.0)*(horas_falta/60.0);

    if(h > 40) {
        premio = 500.0;
    } else if(h > 30 && h <= 40){
        premio = 400.0;
    } else if(h > 20 && h <= 30) {
        premio = 300.0;
    } else if(h > 10 && h <= 20) {
        premio = 200.0;
    } else {
        premio = 100.0;
    }

    printf("Horas extras: %d horas\n", horas_extras/60);
    printf("Horas falta: %d horas\n", horas_falta/60);
    printf("Valor do premio: R$ %.2f\n", premio);

    return 0;
}

