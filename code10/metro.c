#include <stdio.h> /* Instru��o de pr�-processamento, habilita nosso programa a usar essa biblioteca
					de entradas e sa�das, possui fun��es como scanf e printf*/
#include <stdlib.h>/*Instru��o de pr�-processamento, habilita nosso programa a usar essa biblioteca,
					para poder usar o system("PAUSE"); */
#include <locale.h> /*Instru��o de pr�-processamento, habilita nosso programa a usar essa biblioteca,
                    para usar caracteres como: �, �, � ,� etc. No printf( )*/
//Prot�tipo da fun��o
void procNPag (int tot);

//In�cio da execu��o
void main (void)

{
   int    nEst, tPag, tNPag, cont, contP, somaId, tipo, id, sexo;
   float  prUnit, prDuplo, prMens, valArr, idMedP;

   /*Ativa a configura��o da biblioteca locale.h para portugu�s*/
   setlocale(LC_ALL, "Portuguese"); //Ativa a configura��o da biblioteca locale.h para portugu�s

   printf ("Digite o pre�o do bilhete unit�rio:\n"); //primeira intera��o com o usu�rio
   scanf ("%f", &prUnit);
   fflush(stdin); //limpa buffer do teclado
   printf("\n"); //pula linha

   printf ("Digite o pre�o do bilhete duplo:\n"); //segunda intera��o com o usu�rio
   scanf ("%f", &prDuplo);
   fflush(stdin);
   printf("\n");

   printf ("Digite o pre�o do bilhete mensal:\n"); //terceira intera��o com o usu�rio
   scanf ("%f", &prMens);
   fflush(stdin);
   printf("\n");

   for (cont=0; cont<3; cont++)
   {
        printf ("Digite o n�mero da esta��o:\n");
        scanf ("%d", &nEst);
        printf ("\n");

        printf ("Digite o total de pagantes:\n");
        scanf ("%d", &tPag);
        printf ("\n");

        printf ("Digite o total de n�o pagantes:\n");
        scanf ("%d", &tNPag);
        printf ("\n");

        somaId=valArr=0;
        for (contP=0; contP<tPag; contP++)
        {
           printf ("Digite o tipo do bilhete:\n\n 1 - para unit�rio\n 2 - para duplo\n 3 - para mensal\n    ");
           scanf ("%d", &tipo);
           printf ("\n");

           printf ("Digite a idade (pagantes):\n    ");
           scanf ("%d", &id);
           printf ("\n");
           printf ("\n");

           printf ("Digite o sexo (pagantes)\n 1 - para mulher\n 2 - para homens\n    ");
           scanf ("%d", &sexo);
           printf ("\n");
           printf ("\n");

           somaId += id; //mesma coisa que somaId = somaId + id;

           if (tipo==1)
               valArr+=prUnit; //esma coisa que valArr = valArr + prUnit;
           else if (tipo==2)
                    valArr+=prDuplo;
                else
                    valArr+=prMens;
        }

      idMedP=(float)somaId/tPag;
      printf("--------------------------------------------------------------------\n");
      printf("N�mero da esta��o: %d\n\nIdade m�dia dos passageiros pagantes: %.2f\n\nO valor arrecadado foi: %.2f\n\n", nEst, idMedP, valArr);
      printf("--------------------------------------------------------------------\n");
      procNPag(tNPag);
   }

}

//Processa todos os n�o pagantes
void procNPag (int tot)

{
  int totNPF, totNPM, contN, idade, sx;

  totNPF=totNPM=0;

  for (contN=0; contN<tot; contN++)
  {

     printf ("Digite o sexo (n�o pagantes)\n 1 - para mulher\n 2 - para homens\n    ");
     scanf ("%d", &sx);
     printf ("\n");
     printf ("\n");

     printf("Digite a idade (n�o pagantes)\n    ");
     scanf ("%d", &idade);
     printf ("\n");
     printf ("\n");

     if (sx==1)
         totNPF++; //mesma coisa que totNPF = totNPF + 1;
     else
         totNPM++;
  }

 printf("O total de n�o pagantes do sexo feminino � de:\n %d\n\nO total de n�o pagantes do sexo masculino � de:\n %d\n\n\n", totNPF, totNPM);
 printf("--------------------------------------------------------------------------------\n\n\n");

}






























