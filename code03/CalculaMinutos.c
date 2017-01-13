#include <stdio.h> /* Instrução de pré-processamento, habilita nosso programa a usar essa biblioteca 
					de entradas e saídas, possui funções como scanf e printf*/                                                                                     
#include <stdlib.h>/*Instrução de pré-processamento, habilita nosso programa a usar essa biblioteca,
					para poder usar o system("PAUSE"); */

/*Função que recebe dois inteiros como parâmetro, representando respectivamente hora 
 e minuto, calcula o valor em minutos e devolve o valor calculado a quem a chamou*/
int min (int hora, int minuto)
{   
	int calcMin; //Declaração da variável local a função min chamada calcTotMin

    calcMin = hora*60+minuto; //Aqui ocorre o cálculo

    return (calcMin); // Retorna o valor do cálculo armazenado em calcTotMin
							// Os parênteses em calcMin são opcionais
}

//Função principal, por onde o programa começa
int    main   (void)
{   
	int rh, rm, resp; // Declaração de variáveis locais da função main ( )

    printf ("Digite a hora."); // Imprime a mensagem
	scanf ("%d", &rh); // Armazena o valor digitado no endereço de memória  de rh

    printf ("Digite os minutos."); // Imprime a mensagem
    scanf ("%d", &rm); // Armazena o valor digitado no endereço de memória  de rm

    resp = min (rh, rm); //Chamada  da  função  min ( ), atribuindo o valor retornado a resp

    printf ("%d minutos", resp);//Imprime a resposta
	
	system("PAUSE");
	return 0; // Finaliza o programa.
}
    

