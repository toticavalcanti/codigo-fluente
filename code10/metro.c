#include <stdio.h> /* Instrução de pré-processamento, habilita nosso programa a usar essa biblioteca
					de entradas e saídas, possui funções como scanf e printf*/
#include <stdlib.h>/*Instrução de pré-processamento, habilita nosso programa a usar essa biblioteca,
					para poder usar o system("PAUSE"); */
#include <locale.h> /*Instrução de pré-processamento, habilita nosso programa a usar essa biblioteca,
                    para usar caracteres como: ç, Ç, Â ,â etc. No printf( )*/
//Protótipo da função
void procNPag (int tot);

//Início da execução
void main (void)

{
   int    nEst, tPag, tNPag, cont, contP, somaId, tipo, id, sexo;
   float  prUnit, prDuplo, prMens, valArr, idMedP;

   /*Ativa a configuração da biblioteca locale.h para português*/
   setlocale(LC_ALL, "Portuguese"); //Ativa a configuração da biblioteca locale.h para português

   printf ("Digite o preço do bilhete unitário:\n"); //primeira interação com o usuário
   scanf ("%f", &prUnit);
   fflush(stdin); //limpa buffer do teclado
   printf("\n"); //pula linha

   printf ("Digite o preço do bilhete duplo:\n"); //segunda interação com o usuário
   scanf ("%f", &prDuplo);
   fflush(stdin);
   printf("\n");

   printf ("Digite o preço do bilhete mensal:\n"); //terceira interação com o usuário
   scanf ("%f", &prMens);
   fflush(stdin);
   printf("\n");

   for (cont=0; cont<3; cont++)
   {
        printf ("Digite o número da estação:\n");
        scanf ("%d", &nEst);
        printf ("\n");

        printf ("Digite o total de pagantes:\n");
        scanf ("%d", &tPag);
        printf ("\n");

        printf ("Digite o total de não pagantes:\n");
        scanf ("%d", &tNPag);
        printf ("\n");

        somaId=valArr=0;
        for (contP=0; contP<tPag; contP++)
        {
           printf ("Digite o tipo do bilhete:\n\n 1 - para unitário\n 2 - para duplo\n 3 - para mensal\n    ");
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
      printf("Número da estação: %d\n\nIdade média dos passageiros pagantes: %.2f\n\nO valor arrecadado foi: %.2f\n\n", nEst, idMedP, valArr);
      printf("--------------------------------------------------------------------\n");
      procNPag(tNPag);
   }

}

//Processa todos os não pagantes
void procNPag (int tot)

{
  int totNPF, totNPM, contN, idade, sx;

  totNPF=totNPM=0;

  for (contN=0; contN<tot; contN++)
  {

     printf ("Digite o sexo (não pagantes)\n 1 - para mulher\n 2 - para homens\n    ");
     scanf ("%d", &sx);
     printf ("\n");
     printf ("\n");

     printf("Digite a idade (não pagantes)\n    ");
     scanf ("%d", &idade);
     printf ("\n");
     printf ("\n");

     if (sx==1)
         totNPF++; //mesma coisa que totNPF = totNPF + 1;
     else
         totNPM++;
  }

 printf("O total de não pagantes do sexo feminino é de:\n %d\n\nO total de não pagantes do sexo masculino é de:\n %d\n\n\n", totNPF, totNPM);
 printf("--------------------------------------------------------------------------------\n\n\n");

}






























