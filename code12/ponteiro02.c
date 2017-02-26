#include <stdio.h>

//Protótipo
int soma(int numero1, int numero2);

int main(void){
    int num1, num2;
    num1 = 3;
    num2 = 5;

    printf("Valor de num1: %d\n", num1);
    printf("Endereco de num1: %p\n\n", &num1);
    printf("Valor de num2: %d\n", num2);
    printf("Endereco de num2: %p\n", &num2);

    somaUmAosDoisNumeros(&num1, &num2);

    printf("\n\nnum1 agora tem: %d\n\n", num1);
    printf("num2 agora tem: %d\n\n\n", num2);

    return 0;
}

int somaUmAosDoisNumeros(int *numero1, int *numero2)
{
  	*numero1 = *numero1 + 1;
  	*numero2 = *numero2 + 1;
  	printf("\nendereco de numero1: %p", &numero1);
  	printf("\nnumero1 armazena: %p", numero1);
  	printf("\nendereco de numero2: %p\n", &numero2);
  	printf("numero2 armazena: %p", numero2);
}
