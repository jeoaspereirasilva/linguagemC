/*
 *  Estrutura de repetição do while
 *
 * */

#include <stdio.h>

int main (void)
{
  int contador = 1;

  printf("\n");

  do{
    printf("%d ",contador);
    contador = contador + 1;
  }while(contador <= 10);

  printf("\n\n");
  return 0;
}
