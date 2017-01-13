#include <stdio.h> /* Instru��o de pr�-processamento, habilita nosso programa a usar essa biblioteca
					de entradas e sa�das, possui fun��es como scanf e printf*/
#include <stdlib.h>/*Instru��o de pr�-processamento, habilita nosso programa a usar essa biblioteca,
					para poder usar o system("PAUSE"); */
#include <locale.h> /*Instru��o de pr�-processamento, habilita nosso programa a usar essa biblioteca,
                    para usar caracteres como: �, �, � ,� etc. No printf( )*/


void calcDesconto (float media, int matricula)
{
  if (media >= 9.0)
     printf("Matr�cula do aluno:\n%d \n\nValor do desconto:\n30\%%\n\n", matricula);
  else   if (media >= 8.0)
            printf("Matr�cula do aluno:\n%d \n\nValor do desconto:\n10\%%\n\n", matricula);
         else   if (media >= 7.0)
                   printf("Matr�cula do aluno:\n%d \n\nValor do desconto:\n5\%%\n\n", matricula);
                else
                   printf("Matr�cula do aluno:\n%d \n\nValor do desconto:\n0\%%\n\n", matricula);
}

int main ()
{
   int     mat, cont;
   float   mediaGeral;

   /*Ativa a configura��o da biblioteca locale.h para portugu�s*/
    setlocale(LC_ALL, "Portuguese"); //Ativa a configura��o da biblioteca locale.h para portugu�s

   cont = 0; //Inicializa��o do contador
   while (cont < 4)

      {
         printf("----------------------------------------------\n");
         printf("\n");
         printf ("Digite a matr�cula:\n");
		 scanf  ("%d",&mat);
         printf("\n");
         printf ("Digite a m�dia geral:\n");
         scanf  ("%f",&mediaGeral);
         printf("\n");
         printf("----------------------------------------------");
         printf("\n");
         calcDesconto (mediaGeral, mat);
         cont++;
         fflush(stdin);
      }

    system("PAUSE");
	return 0; // Finaliza o programa.

}
