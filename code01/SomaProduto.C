#include <stdio.h> /* Instrução de pré-processamento, habilita nosso programa a usar essa
						Biblioteca de entrada e saída, possui funções como scanf e printf*/
#include <stdlib.h>/*Instrução de pré-processamento, habilita nosso programa a usar essa biblioteca,
					para poder usar o system("PAUSE"); */

/*Função que recebe dois inteiros como parâmetro, soma esses inteiros e imprime na tela a soma e a resposta*/
void soma (int numero1, int numero2)
{
	int soma;

  	soma = numero1 + numero2;

  	printf ("Resultado: %d + %d = %d ", numero1, numero2, soma);
}


/*Função que recebe dois inteiros como parâmetro, multiplica esses inteiros e imprime na tela o produto e a resposta*/
int produto (int num1, int num2)
{
	int produto;

	produto = num1 * num2;

	printf ("Resultado: %d * %d = %d", num1, num2, produto);

}

// Função principal, por onde todo programa começa, é o início da pilha de execução
int    main   (void)
{
int number1, number2;  // Declaração das variáveis inteiras

  	printf ("Tecle o primeiro numero inteiro.");  // Imprime a mensagem na tela
   	scanf ("%d", &number1); // Armazena o número digitado na variável number1

  	printf ("Tecle o segundo numero inteiro."); // Imprime a mensagem na tela
	scanf ("%d", &number2); //Armazena o número digitado na variável number2

	soma (number1, number2); /*Chama a função soma passando uma cópia dos números
                                                        digitados*/
	produto (number1, number2); //  Chama a produto passando uma cópia números

	system("PAUSE");
	return 0; // Finaliza o programa.
}
