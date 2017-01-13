#include <stdio.h> /* Instru��o de pr�-processamento, habilita nosso programa a usar essa biblioteca de entradas e sa�das, possui fun��es como scanf e printf*/                                                                                     
#include <stdlib.h> /*Instru��o de pr�-processamento, habilita nosso programa a usar essa biblioteca, para poder usar o system("PAUSE"); */

//Fun��o que calcula o b�nus
float calcBonus (int tempo, float sal)
{
	return sal * 0.01 * tempo;
}

//Fun��o que calcula o aux�lio creche
float calcCreche (int depend)
{
    return depend * 5.00;
}

//Fun��o que calcula o sal�rio l�quido
void calcSalLiq (float salB, float bon, float aux)
{
    printf ("O sal\240rio l\641quido \202: \nR$%.2f", salB + bon + aux);
}
//Fun��o main ( ), por onde o programa inicia a execu��o
int main (void)
{
    int     matr, qtdDep, tServ; //Declara��es das vari�veis inteiras
    float   salBase, bonus, auxCre; //Declara��es das vari�veis decimais

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
