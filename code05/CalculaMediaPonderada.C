#include <stdio.h> /* Instrução de pré-processamento, habilita nosso programa a usar essa biblioteca
					de entradas e saídas, possui funções como scanf e printf*/
#include <stdlib.h> /*Instrução de pré-processamento, habilita nosso programa a usar essa biblioteca,
					para poder usar o system("PAUSE"); */

//Função que recebe duas notas, dois pesos, calcula a média ponderada e devolve o valor
//calculado
float mediaP (float nota1, float nota2, int peso1, int peso2)
{
	  float mediaPnd; //Variável que armazenará o cálculo

	  mediaPnd = (nota1*peso1+nota2*peso2)/(peso1 + peso2); //Onde ocorre o cálculo

	  return (mediaPnd); //retorna o valor calculado
}


//Função main ( ), por onde o programa inicia a execução
int   main   (void)
{
	  int rpeso1, rpeso2, matricula; //Declaração das variáveis inteiras

	  float rnota1, rnota2, rmedia; //Declaração das variáveis decimais

	  printf ("Digite o peso da primeira nota:\n"); //Exibe a mensagem para o usuário ...
	  scanf ("%d", &rpeso1); //Armazena o valor digitado no endereço de rpeso1

	  printf ("Digite o peso da segunda nota:\n"); //Exibe a mensagem para o usuário ...
	  scanf ("%d", &rpeso2); //Armazena o valor digitado no endereço de rpeso2

	  printf ("Digite o n\243mero da matr\641cula:\n"); //Exibe a mensagem para o usuário ...
	  scanf ("%d", &matricula); //Armazena o valor digitado no endereço de matricula

	  printf ("Digite a nota da primeira prova:\n"); //Exibe a mensagem para o usuário ...
	  scanf ("%f", &rnota1); //Armazena o valor digitado no endereço de rnota1

	  printf ("Digite a nota da segunda prova:\n"); //Exibe a mensagem para o usuário ...
	  scanf ("%f", &rnota2); //Armazena o valor digitado no endereço de rnota2

	  rmedia = mediaP (rpeso1, rpeso2, rnota1, rnota2); //chama a função mediap, passando os valores e rmedia recebe o resultado do cálculo

	  printf ("A m\202dia ponderada do aluno de matr\641cula %d \202:\n %.2f", matricula, rmedia); //Exibe a mensagem com a resposta 
																									//para o usuário.

	  system("PAUSE");
	  return 0; // Finaliza o programa.
}
