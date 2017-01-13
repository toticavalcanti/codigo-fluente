#include <stdio.h> /* Instrução de pré-processamento, habilita nosso programa a usar essa biblioteca 
					de entradas e saídas, possui funções como scanf e printf*/                                                                                     
#include <stdlib.h> /*Instrução de pré-processamento, habilita nosso programa a usar essa biblioteca,
					para poder usar o system("PAUSE"); */

void valorEstoque (float pu, int qe, int cod)
{    
	float ve;

    ve = pu*qe;

	printf ("O valor em estoque da peca de codigo %d eh:\n %.2f", cod, ve);
}


int    main   (void)
{  
	float   rpu;
    int    rqe, rcod;

    printf ("Digite o codigo da peca:\n");
    scanf ("%d", &rcod);

    printf ("Digite o preco unitario:\n");
    scanf ("%f", &rpu);
    
    printf ("Digite a quantidade em estoque:\n");
    scanf ("%d", &rqe);

    valorEstoque (rpu, rqe, rcod);
	
	system("PAUSE");
	return 0;
}