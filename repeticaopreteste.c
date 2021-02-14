/*
 *  Estrutura de repetição while
 *
 * */

#include <stdio.h>

int main (void)
{
  int opcao = 1;
  int primeiroNumero;
  int segundoNumero;
  int resultado;

  while(opcao != 0)
  {
    printf("\n****************************\n");
    printf("Digite um numero inteiro >_");
    scanf("%d",&primeiroNumero);

    printf("Digite outro numero inteiro >_");
    scanf("%d",&segundoNumero);

    resultado = primeiroNumero + segundoNumero;
    printf("Resultado da soma: %d\n", resultado);

    printf("Deseja somar outros numeros?...\n");
    printf("[1] - Confirmar\n");
    printf("[0] - Cancelar\n");
    printf(">_");
    scanf("%d",&opcao);
  }
  printf("Programa encerrado...\n");

  return 0;
}
