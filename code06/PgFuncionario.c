#include <stdio.h> /* Instrução de pré-processamento, habilita nosso programa a usar essa biblioteca de entradas e saídas, possui funções como scanf e printf*/                                                                                     
#include <stdlib.h> /*Instrução de pré-processamento, habilita nosso programa a usar essa biblioteca, para poder usar o system("PAUSE"); */

//Função que calcula o bônus
float calcBonus (int tempo, float sal)
{
	return sal * 0.01 * tempo;
}

//Função que calcula o auxílio creche
float calcCreche (int depend)
{
    return depend * 5.00;
}

//Função que calcula o salário líquido
void calcSalLiq (float salB, float bon, float aux)
{
    printf ("O sal\240rio l\641quido \202: \nR$%.2f", salB + bon + aux);
}
//Função main ( ), por onde o programa inicia a execução
int main (void)
{
    int     matr, qtdDep, tServ; //Declarações das variáveis inteiras
    float   salBase, bonus, auxCre; //Declarações das variáveis decimais

    printf ("Digite a matr%ccula:\n", 161);
    scanf  ("%d", &matr);
	printf("\n");

    printf ("Digite o sal%crio base:\n", 160);
    scanf  ("%f", &salBase);
	printf("\n");

    printf ("Digite a quantidade de dependentes:\n");
    scanf  ("%d", &qtdDep);
	printf("\n");

    printf ("Digite o tempo de servi%co:\n", 135);
    scanf  ("%d", &tServ);
	printf("\n");

    bonus = calcBonus (tServ, salBase);

	auxCre = calcCreche (qtdDep);

	printf ("A matr\641cula \202:\n%d\n \nO b\223nus \202:\nR$%.2f\n\nO aux\641lio creche \202 de:\nR$%.2f\n\n", matr, bonus, auxCre);

    calcSalLiq (salBase, bonus, auxCre);
	   
    system("PAUSE");
    return 0; // Finaliza o programa.
}
