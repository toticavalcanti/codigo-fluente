#include <stdio.h> /* Instrução de pré-processamento, habilita nosso programa a usar essa biblioteca
					de entradas e saídas, possui funções como scanf e printf*/
#include <stdlib.h>/*Instrução de pré-processamento, habilita nosso programa a usar essa biblioteca,
					para poder usar o system("PAUSE"); */
#include <locale.h> /*Instrução de pré-processamento, habilita nosso programa a usar essa biblioteca,
                    para usar caracteres como: ç, Ç, Â ,â etc. No printf( )*/

int menu (  )
{
   int  num;

   printf("\nDigite 1 pra calcular a área de um quadrado\nDigite 2 pra calcular a área de um retângulo\nDigite 3 "
   "pra calcular a área de um círculo\nDigite 4 pra calcular a área de um trapézio\nDigite 5 pra finalizar\n");
   fflush(stdin);
   scanf("%d",&num);

   return num;

}

float calcQuadrado (  )
{
   float lado, area;
   printf("Digite o lado ");
   scanf("%f",&lado);
   fflush(stdin);
   area=lado*lado;
   return area;
}

float calcRetangulo (  )
{
   float comprimento,largura, area;
   printf("Digite o comprimento ");
   scanf("%f",&comprimento);
   fflush(stdin);
   printf("Digite a largura ");
   scanf("%f",&largura);
   fflush(stdin);
   area=comprimento*largura;
   return area;
}

float calcCirculo (  )
{
   float raio, area;
   printf("Digite o raio do círculo ");
   scanf("%f",&raio);
   fflush(stdin);
   area=3.14*raio*raio;
   return area;
}

float calcTrapezio (  )
{
   float bmaior,bmenor, altura, area;
   printf("Digite a base maior ");
   scanf("%f",&bmaior);
   fflush(stdin);
   printf("Digite a base menor ");
   scanf("%f",&bmenor);
   fflush(stdin);
   printf("Digite a altura ");
   scanf("%f",&altura);
   fflush(stdin);
   area=(bmaior+bmenor)*altura/2;
   return area;
}

void main (void)
{
  int opcao;
  float area;

  /*Ativa a configuração da biblioteca locale.h para português*/
  setlocale(LC_ALL, "Portuguese"); //Ativa a configuração da biblioteca locale.h para português

  opcao=menu(  );//opcao recebe a opção digitada pelo usuário
  While (opcao != 5)
  {
    	if (opcao == 1)
           		 area=calcQuadrado(  );
     	else   if (opcao == 2)
		area=calcRetangulo(  );
	else   if (opcao == 3)
		area=calcCirculo(  );
	else
                          	area=calcTrapezio(  );
                printf ("%.2f",area);
                opcao=menu(   );
  } // Fim do while
 system("PAUSE");
}
