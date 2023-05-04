/* Uma empresa da cidade de Compilação-SP possui 3.000 (três mil) funcionários e precisa de um algoritmo onde são informados os dados de um funcionário específico (idade, sexo, salário base, ano de contratação e matrícula) exiba todos os dados do funcionário além do novo salário que deve ser calculado de acordo com o quadro abaixo

Faixa etária	Sexo	Reajuste	Desconto(até 10 anos na empresa)	Acréscimo(mais de 10 anos na empresa)
18 - 39	          M	      10%	    R$10,00	                              R$17,00
	              F	       8%	    R$11,00	                              R$16,00

40 – 69	          M	       8%	    R$ 5,00	                              R$15,00
	              F	      10%	    R$ 7,00	                              R$14,00

70 – 99	          M	      15%	    R$ 15,00	                          R$13,00
	              F	      17%	    R$ 17,00	                          R$12,00 */



#include<stdio.h>

int main(){
    char sexo;
    int anoatual, anocontrato, idade;
    float salariobase, salariofinal, reajuste, desconto = 0, acrescimo = 0;
    printf("Digite o valor do salario base: ");
    scanf("%f", &salariobase);
    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite o sexo(M/F): ");
    getchar();
    scanf("%c", &sexo);
    printf("Digite o ano de contratacao: ");
    scanf("%d", &anocontrato);
    printf("Digite o ano atual: ");
    scanf("%d", &anoatual);
    
    if(idade>=18 || idade <=39)
    {
            switch (sexo)
            {
            case 'M': case 'm':
                reajuste = salariobase*0.1;
                if((anoatual - anocontrato)<=10)
                    desconto = 10.00;
                else
                    acrescimo = 17.00;
                break;
            case 'F': case 'f':
                reajuste = salariobase*0.08;
                if((anoatual - anocontrato)<=10)
                    desconto = 11.00;
                else
                    acrescimo = 16.00;
            }

    }
    else if(idade>=40 || idade <=69)
    {
        switch (sexo)
            {
            case 'M': case 'm':
                reajuste = salariobase*0.08;
                if((anoatual - anocontrato)<=10)
                    desconto = 5.00;
                else
                    acrescimo = 15.00;
                break;
            case 'F': case 'f':
                reajuste = salariobase*0.1;
                if((anoatual - anocontrato)<=10)
                    desconto = 5.00;
                else
                    acrescimo = 7.00;
            }

    }
    
    else if(idade>=70 || idade <=99){
        switch (sexo)
            {
            case 'M': case 'm':
                reajuste = salariobase*0.15;
                if((anoatual - anocontrato)<=10)
                    desconto = 15.00;
                else
                    acrescimo = 13.00;
                break;
            case 'F': case 'f':
                reajuste = salariobase*0.17;
                if((anoatual - anocontrato)<=10)
                    desconto = 17.00;
                else
                    acrescimo = 12.00;
            }
    }

    salariofinal = salariobase + reajuste - desconto + acrescimo;
    
    printf("Idade: %d\nSexo: %c\nSalario base: %.2f\nSalario final: %.2f\n",idade,sexo,salariobase,salariofinal);
    
    return 0;
}
