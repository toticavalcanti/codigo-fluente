#include <stdio.h> /* Instrução de pré-processamento, habilita nosso programa a usar essa biblioteca de entradas e saídas, possui funções como scanf e printf*/
#include <stdlib.h> /*Instrução de pré-processamento, habilita nosso programa a usar essa biblioteca, para poder usar o system("PAUSE"); */
#include <locale.h> /*Instrução de pré-processamento, habilita nosso programa a usar essa biblioteca, para usar caracteres como: ç, Ç, Â ,â etc. No printf( )*/
#include <string.h> /*Instrução de pré-processamento que importa a biblioteca de funções para manipular strings*/

void main (void)
{
 	char  nome[40];
	printf ("Digite seu nome: " );
	gets ( nome );
	puts ("Bom dia");
	puts (nome);
}

