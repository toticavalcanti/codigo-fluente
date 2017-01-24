#include <stdio.h> /* Instrução de pré-processamento, habilita nosso programa a usar essa biblioteca de entradas e saídas, possui funções como scanf e printf*/
#include <stdlib.h> /*Instrução de pré-processamento, habilita nosso programa a usar essa biblioteca, para poder usar o system("PAUSE"); */
#include <locale.h> /*Instrução de pré-processamento, habilita nosso programa a usar essa biblioteca, para usar caracteres como: ç, Ç, Â ,â etc. No printf( )*/

//Calcula o valor multiplicando o preço pela quantidade e retorna o valor calculado
float calcValor (float preco, float qtd)
{
	  return preco*qtd;
}

/*Calcula o lucro multiplicando a quantidade do produto pelo preço do produto
e pelo percentual de lucro de cada produto, a divisão por cem é por causa da porcetagem referente a margem de lucro de cada produto*/
float calcLucro (float qtd, float pr, float perc)
{
	  return (qtd*pr*perc)/100;
}

//Calcula o percentual vendido de cada produto (Álcool, Gasolina comum, Gasolina Aditivada)
float calcPercentual (float qtdProd, float qtd1, float qtd2)
{
	  //o número 100 na conta é porque a resposta está em porcentagem
	  return 100 * qtdProd / (qtdProd + qtd1 + qtd2);
}

//Ponto inicial do código
int main (void)
{
	  //Declaração das variáveis
      float  prAlc, prGas, prAdit, qtdAlc, qtdGas, qtdAdit, valRec, percAlc, percGas, percAdit, lucro;

	  /*Ativa a configuração da biblioteca locale.h para português*/
	  setlocale(LC_ALL, "Portuguese"); //Ativa a configuração da biblioteca locale.h para português

	  //Interações com o usuário
      printf ("Digite o preço do álcool: ");
      scanf  ("%f", &prAlc);
      fflush(stdin);

      printf ("\nDigite o preço da gasolina: ");
      scanf  ("%f", &prGas);
      fflush(stdin);

      printf ("\nDigite o preço da gasolina aditivada: ");
      scanf  ("%f", &prAdit);
      fflush(stdin);

      printf ("\nDigite a quantidade vendida do álcool: ");
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

	  /*Chamadas da função calcPercentual ( ) para calcular o percentual vendido de cada produto*/
	  percAlc = calcPercentual(qtdAlc, qtdGas, qtdAdit); //qtdGas e qtdAdit serão qtd1 e qtd2 em calcPercentual
	  percGas = calcPercentual(qtdGas, qtdAlc, qtdAdit); //qtdAlc e qtdAdit serão qtd1 e qtd2 em calcPercentual
	  percAdit = calcPercentual(qtdAdit, qtdAlc, qtdGas); //qtdAlc e qtdGas serão qtd1 e qtd2 em calcPercentual

	  //calcula o lucro de cada produto, soma e armazena o resultado em lucro
      lucro = calcLucro(qtdAlc, prAlc, 10) + calcLucro(qtdGas, prGas, 15) + calcLucro(qtdAdit, prAdit, 20);//Calcula o lucro e armazena em lucro

	  //Imprime a mensagem final com as informações processadas no console
      printf("\n\nO valor arrecadado pelo posto foi de: R$ %.2f\n\nO percentual vendido de álcool foi de: %.2f \%% \n"
	  "\nO percentual vendido de gasolina comum foi de: %.2f \%% \n"
	  "\nO percentual vendido de gasolina aditivada foi de: %.2f \%% \n\nO lucro do posto foi de: R$ %.2f\n\n\n\n", valRec, percAlc, percGas, percAdit, lucro);

	  system("PAUSE");
	  return 0;
}