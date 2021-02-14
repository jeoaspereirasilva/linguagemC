/*
 *  Estrutura de seleção múltipla usando switch
 *
 * */

#include <stdio.h>

int main (void)
{
  int opcao;
  int primeiroNumero;
  int segundoNumero;
  int resultado;

  printf("\n**************************\n");

  printf("Digite um numero inteiro >_");
  scanf("%d",&primeiroNumero);

  printf("Digite outro numero inteiro >_");
  scanf("%d",&segundoNumero);

  printf("\n**************************\n");

  printf("Escolha uma opcao\n");
  printf("[1] - Somar\n");
  printf("[2] - Subtrair\n");
  printf("[3] - Multiplicar\n");
  printf("[4] - Dividir\n");
  scanf("%d",&opcao);

  switch(opcao)
  {
    case 1:
      resultado = primeiroNumero + segundoNumero;
      printf("Resultado da soma: %d\n",resultado);
    break;
    case 2:
      resultado = primeiroNumero - segundoNumero;
      printf("Resultado da subtracao: %d\n",resultado);
    break;
    case 3:
      resultado = primeiroNumero * segundoNumero;
      printf("Resultado da multiplicacao: %d\n",resultado);
    break;
    case 4:
      resultado = primeiroNumero / segundoNumero;
      printf("Resultado da divisao: %d\n",resultado);
    break;
    default:
      printf("Voce nao escolheu uma opcao valida\n");
      getchar();
  }
  printf("Fim do programa...\n");

  return 0;
}
