#include <stdio.h> /* Instru��o de pr�-processamento, habilita nosso programa a
                    usar essa biblioteca de entradas e sa�das, possui fun��es como scanf e printf*/
void main()
{
  int n1, n2, n3;
  int *ptr;  // declara um ponteiro para um inteiro
             // um ponteiro para uma vari�vel do tipo inteiro

  n1 = 5;
  n2 = 2;
  n3 = 3;
  ptr = &n1;

  printf("Endereco de n1: %p", &n1);
  printf("\nEndereco de n2: %p", &n2);
  printf("\nEndereco de n3: %p", &n3);
  printf("\nEndereco de ptr: %p", &ptr);
  printf("\nConteudo de ptr: %p \nConteudo da var que ptr aponta: %d\n", ptr, *ptr); //O %p	(Ponteiro) exibe o endere�o de mem�ria do ponteiro em nota��o hexadecimal.

  printf("\nn1: %d\nn2: %d\nn3: %d\n\n\n", n1, n2, n3);
}
