#include <stdio.h> /* Instru��o de pr�-processamento, habilita nosso programa a usar essa biblioteca
					de entradas e sa�das, possui fun��es como scanf e printf*/
#include <stdlib.h> /*Instru��o de pr�-processamento, habilita nosso programa a usar essa biblioteca,
					para poder usar o system("PAUSE"); */

//Fun��o que recebe duas notas, dois pesos, calcula a m�dia ponderada e devolve o valor
//calculado
float mediaP (float nota1, float nota2, int peso1, int peso2)
{
	  float mediaPnd; //Vari�vel que armazenar� o c�lculo

	  mediaPnd = (nota1*peso1+nota2*peso2)/(peso1 + peso2); //Onde ocorre o c�lculo

	  return (mediaPnd); //retorna o valor calculado
}


//Fun��o main ( ), por onde o programa inicia a execu��o
int   main   (void)
{
	  int rpeso1, rpeso2, matricula; //Declara��o das vari�veis inteiras

	  float rnota1, rnota2, rmedia; //Declara��o das vari�veis decimais

	  printf ("Digite o peso da primeira nota:\n"); //Exibe a mensagem para o usu�rio ...
	  scanf ("%d", &rpeso1); //Armazena o valor digitado no endere�o de rpeso1

	  printf ("Digite o peso da segunda nota:\n"); //Exibe a mensagem para o usu�rio ...
	  scanf ("%d", &rpeso2); //Armazena o valor digitado no endere�o de rpeso2

	  printf ("Digite o n\243mero da matr\641cula:\n"); //Exibe a mensagem para o usu�rio ...
	  scanf ("%d", &matricula); //Armazena o valor digitado no endere�o de matricula

	  printf ("Digite a nota da primeira prova:\n"); //Exibe a mensagem para o usu�rio ...
	  scanf ("%f", &rnota1); //Armazena o valor digitado no endere�o de rnota1

	  printf ("Digite a nota da segunda prova:\n"); //Exibe a mensagem para o usu�rio ...
	  scanf ("%f", &rnota2); //Armazena o valor digitado no endere�o de rnota2

	  rmedia = mediaP (rpeso1, rpeso2, rnota1, rnota2); //chama a fun��o mediap, passando os valores e rmedia recebe o resultado do c�lculo

	  printf ("A m\202dia ponderada do aluno de matr\641cula %d \202:\n %.2f", matricula, rmedia); //Exibe a mensagem com a resposta 
																									//para o usu�rio.

	  system("PAUSE");
	  return 0; // Finaliza o programa.
}
