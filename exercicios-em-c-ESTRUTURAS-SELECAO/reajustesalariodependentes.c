/* Faça um algoritmo que receba o salário base, a idade, o ano de contratação e o número de dependentes de um funcionário de uma empresa. Deve-se receber também o ano atual. Calcule o seu salário final, sabendo que este é calculado adicionando ao salário base, os seguintes acréscimos:
•	1% por cada ano de idade superior a 25 anos.
•	 3% por cada ano de casa.
•	 5% por dependente. */


#include<stdio.h>

int main(){
    int anoatual, anocontrato, idade, dependentes;
    float salariobase, salariofinal, acres1, acres2, acres3;
    printf("Digite o valor do salario base: ");
    scanf("%f", &salariobase);
    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite o numero de dependentes: ");
    scanf("%d", &dependentes);
    printf("Digite o ano de contratacao: ");
    scanf("%d", &anocontrato);
    printf("Digite o ano atual: ");
    scanf("%d", &anoatual);
    
    if(idade>25){
        acres1 = salariobase*(idade-25)*0.01;
    }
    acres2 = salariobase*dependentes*0.05;
    acres3 = salariobase*0.03*(anoatual-anocontrato);
    
    salariofinal = salariobase + acres1 + acres2 + acres3;
    
    printf("O salario final eh de: %.2f", salariofinal);
    
    return 0;
}
