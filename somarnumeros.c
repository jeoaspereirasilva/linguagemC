/*
 *  Somando dois números inteiros
 *
 * */

#include <stdio.h>

int main (void)
{
  int primeiroNumero;
  int segundoNumero;
  int resultado;

  printf("Digite um numero inteiro >_");
  scanf("%d",&primeiroNumero);

  printf("Digite outro numero inteiro >_");
  scanf("%d",&segundoNumero);

  resultado = primeiroNumero + segundoNumero;
  printf("Resultado da soma: %d\n", resultado);

  printf("Fim do programa...\n");
  return 0;
}
