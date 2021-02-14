/*
 *  Estrutura de seleção simples usando if
 *
 * */

#include <stdio.h>

int main (void)
{
  int primeiroNumero;
  int segundoNumero;

  printf("Digite um numero inteiro >_");
  scanf("%d",&primeiroNumero);

  printf("Digite outro numero inteiro >_");
  scanf("%d",&segundoNumero);


  if(primeiroNumero == segundoNumero)
  {
    printf("Os numeros sao iguais\n");
  }

  return 0;
}
