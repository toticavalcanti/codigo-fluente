#include <stdio.h> /* Instru��o de pr�-processamento, habilita nosso programa a usar essa biblioteca de entradas e sa�das, possui fun��es como scanf e printf*/
#include <stdlib.h> /*Instru��o de pr�-processamento, habilita nosso programa a usar essa biblioteca, para poder usar o system("PAUSE"); */
#include <locale.h> /*Instru��o de pr�-processamento, habilita nosso programa a usar essa biblioteca, para usar caracteres como: �, �, � ,� etc. No printf( )*/

//Calcula o valor multiplicando o pre�o pela quantidade e retorna o valor calculado
float calcValor (float preco, float qtd)
{
	  return preco*qtd;
}

/*Calcula o lucro multiplicando a quantidade do produto pelo pre�o do produto
e pelo percentual de lucro de cada produto, a divis�o por cem � por causa da porcetagem referente a margem de lucro de cada produto*/
float calcLucro (float qtd, float pr, float perc)
{
	  return (qtd*pr*perc)/100;
}

//Calcula o percentual vendido de cada produto (�lcool, Gasolina comum, Gasolina Aditivada)
float calcPercentual (float qtdProd, float qtd1, float qtd2)
{
	  //o n�mero 100 na conta � porque a resposta est� em porcentagem
	  return 100 * qtdProd / (qtdProd + qtd1 + qtd2);
}

//Ponto inicial do c�digo
int main (void)
{
	  //Declara��o das vari�veis
      float  prAlc, prGas, prAdit, qtdAlc, qtdGas, qtdAdit, valRec, percAlc, percGas, percAdit, lucro;

	  /*Ativa a configura��o da biblioteca locale.h para portugu�s*/
	  setlocale(LC_ALL, "Portuguese"); //Ativa a configura��o da biblioteca locale.h para portugu�s

	  //Intera��es com o usu�rio
      printf ("Digite o pre�o do �lcool: ");
      scanf  ("%f", &prAlc);
      fflush(stdin);

      printf ("\nDigite o pre�o da gasolina: ");
      scanf  ("%f", &prGas);
      fflush(stdin);

      printf ("\nDigite o pre�o da gasolina aditivada: ");
      scanf  ("%f", &prAdit);
      fflush(stdin);

      printf ("\nDigite a quantidade vendida do �lcool: ");
      scanf  ("%f", &qtdAlc);
      fflush(stdin);

      printf ("\nDigite a quantidade vendida da gasolina comum: ");
      scanf  ("%f", &qtdGas);
      fflush(stdin);

      printf ("\nDigite a quantidade vendida da gasolina aditivada: ");
      scanf  ("%f", &qtdAdit);
      fflush(stdin);


	  //calcula o valor recebido de cada produto, soma e armazena em valRec
      valRec = calcValor(prAlc, qtdAlc) + calcValor(prGas, qtdGas) + calcValor(prAdit, qtdAdit);

	  /*Chamadas da fun��o calcPercentual ( ) para calcular o percentual vendido de cada produto*/
	  percAlc = calcPercentual(qtdAlc, qtdGas, qtdAdit); //qtdGas e qtdAdit ser�o qtd1 e qtd2 em calcPercentual
	  percGas = calcPercentual(qtdGas, qtdAlc, qtdAdit); //qtdAlc e qtdAdit ser�o qtd1 e qtd2 em calcPercentual
	  percAdit = calcPercentual(qtdAdit, qtdAlc, qtdGas); //qtdAlc e qtdGas ser�o qtd1 e qtd2 em calcPercentual

	  //calcula o lucro de cada produto, soma e armazena o resultado em lucro
      lucro = calcLucro(qtdAlc, prAlc, 10) + calcLucro(qtdGas, prGas, 15) + calcLucro(qtdAdit, prAdit, 20);//Calcula o lucro e armazena em lucro

	  //Imprime a mensagem final com as informa��es processadas no console
      printf("\n\nO valor arrecadado pelo posto foi de: R$ %.2f\n\nO percentual vendido de �lcool foi de: %.2f \%% \n"
	  "\nO percentual vendido de gasolina comum foi de: %.2f \%% \n"
	  "\nO percentual vendido de gasolina aditivada foi de: %.2f \%% \n\nO lucro do posto foi de: R$ %.2f\n\n\n\n", valRec, percAlc, percGas, percAdit, lucro);

	  system("PAUSE");
	  return 0;
}