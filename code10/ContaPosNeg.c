#include <stdio.h> /* Instru��o de pr�-processamento, habilita nosso programa a usar essa biblioteca
					de entradas e sa�das, possui fun��es como scanf e printf*/
#include <stdlib.h>/*Instru��o de pr�-processamento, habilita nosso programa a usar essa biblioteca,
					para poder usar o system("PAUSE"); */
#include <locale.h> /*Instru��o de pr�-processamento, habilita nosso programa a usar essa biblioteca,
                    para usar caracteres como: �, �, � ,� etc. No printf( )*/

void main (void)
{
    	int contN, contP, i;
    	int numeros[6] = {-4, 2, 5, -6, 9, 7}; //vetor j� preenchido

    	  /*Ativa a configura��o da biblioteca locale.h para portugu�s*/
        setlocale(LC_ALL, "Portuguese"); //Ativa a configura��o da biblioteca locale.h para portugu�s

        contN = 0;
        contP = 0;

        for ( i = 0; i < 6; i++ )
        {
             if (numeros[i] < 0)
                contN++;
             else
                contP++;
        }

    	printf ("\nA quantidade de n�meros negativos �: %d\n", contN);
        printf ("\nA quantidade de n�meros positivos �: %d\n\n\n\n", contP);

    	system("PAUSE");
}