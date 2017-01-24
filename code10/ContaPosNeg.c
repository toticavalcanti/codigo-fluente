#include <stdio.h> /* Instrução de pré-processamento, habilita nosso programa a usar essa biblioteca
					de entradas e saídas, possui funções como scanf e printf*/
#include <stdlib.h>/*Instrução de pré-processamento, habilita nosso programa a usar essa biblioteca,
					para poder usar o system("PAUSE"); */
#include <locale.h> /*Instrução de pré-processamento, habilita nosso programa a usar essa biblioteca,
                    para usar caracteres como: ç, Ç, Â ,â etc. No printf( )*/

void main (void)
{
    	int contN, contP, i;
    	int numeros[6] = {-4, 2, 5, -6, 9, 7}; //vetor já preenchido

    	  /*Ativa a configuração da biblioteca locale.h para português*/
        setlocale(LC_ALL, "Portuguese"); //Ativa a configuração da biblioteca locale.h para português

        contN = 0;
        contP = 0;

        for ( i = 0; i < 6; i++ )
        {
             if (numeros[i] < 0)
                contN++;
             else
                contP++;
        }

    	printf ("\nA quantidade de números negativos é: %d\n", contN);
        printf ("\nA quantidade de números positivos é: %d\n\n\n\n", contP);

    	system("PAUSE");
}