#include <stdio.h> /* Instru��o de pr�-processamento, habilita nosso programa a usar essa
						Biblioteca de entrada e sa�da, possui fun��es como scanf e printf*/
#include <stdlib.h>/*Instru��o de pr�-processamento, habilita nosso programa a usar essa biblioteca,
					para poder usar o system("PAUSE"); */

/*Fun��o que recebe dois inteiros como par�metro, soma esses inteiros e imprime na tela a soma e a resposta*/
void soma (int numero1, int numero2)
{
	int soma;

  	soma = numero1 + numero2;

  	printf ("Resultado: %d + %d = %d ", numero1, numero2, soma);
}


/*Fun��o que recebe dois inteiros como par�metro, multiplica esses inteiros e imprime na tela o produto e a resposta*/
int produto (int num1, int num2)
{
	int produto;

	produto = num1 * num2;

	printf ("Resultado: %d * %d = %d", num1, num2, produto);

}

// Fun��o principal, por onde todo programa come�a, � o in�cio da pilha de execu��o
int    main   (void)
{
int number1, number2;  // Declara��o das vari�veis inteiras

  	printf ("Tecle o primeiro numero inteiro.");  // Imprime a mensagem na tela
   	scanf ("%d", &number1); // Armazena o n�mero digitado na vari�vel number1

  	printf ("Tecle o segundo numero inteiro."); // Imprime a mensagem na tela
	scanf ("%d", &number2); //Armazena o n�mero digitado na vari�vel number2

	soma (number1, number2); /*Chama a fun��o soma passando uma c�pia dos n�meros
                                                        digitados*/
	produto (number1, number2); //  Chama a produto passando uma c�pia n�meros

	system("PAUSE");
	return 0; // Finaliza o programa.
}
