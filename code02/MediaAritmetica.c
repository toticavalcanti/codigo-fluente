	#include <stdio.h>/* Instru��o de pr�-processamento, habilita nosso programa a usar essa biblioteca de entradas e sa�das, 
						possui fun��es como scanf e printf*/  
	#include <stdlib.h>
		
	/*Fun��o que recebe tr�s inteiros como par�metro, calcula e retorna a m�dia aritm�tica*/
	float media (int n1, int n2, int n3)
	{  
		float md; // Vari�vel do tipo float que receber� o valor do c�lculo da m�dia
		md = (float) (n1+n2+n3)/3; //Soma os n�meros inteiros e divide por tr�s
		return md; // Retorna o valor da m�dia 
	}

	int    main   (void)
	{   
		int num1, num2, num3; /* Declara��o das vari�veis tipo int que armazenar� os n�meros digitados */
		
		float rmd; // Vari�vel tipo float que receber� o resultado da m�dia

		printf ("Digite o primeiro numero inteiro."); //Imprime a primeira mensagem
		scanf ("%d", &num1); //Armazena o valor digitado no endere�o de num1

		printf ("Digite o segundo numero inteiro."); //Imprime a segunda mensagem
		scanf ("%d", &num2); //Armazena o valor digitado no endere�o de num2

		printf ("Digite o terceiro numero inteiro."); //Imprime a terceira mensagem
		scanf ("%d", &num3); //Armazena o valor digitado no endere�o de num3

		rmd = media (num1, num2, num3); /*Chamada da fun��o media ( ), passando c�pias de num1, num2 e num3. 
										O resultado retornado � atribu�do a rmd*/
		printf ("A media aritmetica eh %f", rmd); /*Imprime a mensagem com a m�dia*/
		
		system("PAUSE");
		return 0; // Finaliza o programa.
	}
