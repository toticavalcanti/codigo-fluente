	#include <stdio.h>/* Instrução de pré-processamento, habilita nosso programa a usar essa biblioteca de entradas e saídas, 
						possui funções como scanf e printf*/  
	#include <stdlib.h>
		
	/*Função que recebe três inteiros como parâmetro, calcula e retorna a média aritmética*/
	float media (int n1, int n2, int n3)
	{  
		float md; // Variável do tipo float que receberá o valor do cálculo da média
		md = (float) (n1+n2+n3)/3; //Soma os números inteiros e divide por três
		return md; // Retorna o valor da média 
	}

	int    main   (void)
	{   
		int num1, num2, num3; /* Declaração das variáveis tipo int que armazenará os números digitados */
		
		float rmd; // Variável tipo float que receberá o resultado da média

		printf ("Digite o primeiro numero inteiro."); //Imprime a primeira mensagem
		scanf ("%d", &num1); //Armazena o valor digitado no endereço de num1

		printf ("Digite o segundo numero inteiro."); //Imprime a segunda mensagem
		scanf ("%d", &num2); //Armazena o valor digitado no endereço de num2

		printf ("Digite o terceiro numero inteiro."); //Imprime a terceira mensagem
		scanf ("%d", &num3); //Armazena o valor digitado no endereço de num3

		rmd = media (num1, num2, num3); /*Chamada da função media ( ), passando cópias de num1, num2 e num3. 
										O resultado retornado é atribuído a rmd*/
		printf ("A media aritmetica eh %f", rmd); /*Imprime a mensagem com a média*/
		
		system("PAUSE");
		return 0; // Finaliza o programa.
	}
