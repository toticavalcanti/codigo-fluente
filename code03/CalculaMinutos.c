#include <stdio.h> /* Instru��o de pr�-processamento, habilita nosso programa a usar essa biblioteca 
					de entradas e sa�das, possui fun��es como scanf e printf*/                                                                                     
#include <stdlib.h>/*Instru��o de pr�-processamento, habilita nosso programa a usar essa biblioteca,
					para poder usar o system("PAUSE"); */

/*Fun��o que recebe dois inteiros como par�metro, representando respectivamente hora 
 e minuto, calcula o valor em minutos e devolve o valor calculado a quem a chamou*/
int min (int hora, int minuto)
{   
	int calcMin; //Declara��o da vari�vel local a fun��o min chamada calcTotMin

    calcMin = hora*60+minuto; //Aqui ocorre o c�lculo

    return (calcMin); // Retorna o valor do c�lculo armazenado em calcTotMin
							// Os par�nteses em calcMin s�o opcionais
}

//Fun��o principal, por onde o programa come�a
int    main   (void)
{   
	int rh, rm, resp; // Declara��o de vari�veis locais da fun��o main ( )

    printf ("Digite a hora."); // Imprime a mensagem
	scanf ("%d", &rh); // Armazena o valor digitado no endere�o de mem�ria  de rh

    printf ("Digite os minutos."); // Imprime a mensagem
    scanf ("%d", &rm); // Armazena o valor digitado no endere�o de mem�ria  de rm

    resp = min (rh, rm); //Chamada  da  fun��o  min ( ), atribuindo o valor retornado a resp

    printf ("%d minutos", resp);//Imprime a resposta
	
	system("PAUSE");
	return 0; // Finaliza o programa.
}
    

