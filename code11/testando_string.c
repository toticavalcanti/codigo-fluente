#include <stdio.h> /* Instru��o de pr�-processamento, habilita nosso programa a usar essa biblioteca de entradas e sa�das, possui fun��es como scanf e printf*/
#include <stdlib.h> /*Instru��o de pr�-processamento, habilita nosso programa a usar essa biblioteca, para poder usar o system("PAUSE"); */
#include <locale.h> /*Instru��o de pr�-processamento, habilita nosso programa a usar essa biblioteca, para usar caracteres como: �, �, � ,� etc. No printf( )*/
#include <string.h> /*Instru��o de pr�-processamento que importa a biblioteca de fun��es para manipular strings*/

void main (void)
{
 	char  nome[40];
	printf ("Digite seu nome: " );
	gets ( nome );
	puts ("Bom dia");
	puts (nome);
}

