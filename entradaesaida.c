/*
 *  Entrada e saída de dados em linguagem C
 *
 * */

#include <stdio.h>

int main (void)
{
  /* tipos de dados que serão armazenados na memória RAM */
  int numeroInteiro;
  float numeroDecimal;
  char letra;

  printf("Digite um numero inteiro >_");
  scanf("%d",&numeroInteiro);
  setbuf(stdin, NULL);/* limpando o buffer de leitura da entrada padrão */

  printf("Digite um numero decimal >_");
  scanf("%f",&numeroDecimal);
  setbuf(stdin, NULL);

  printf("Digite uma letra >_");
  scanf("%c",&letra);

  printf("*****************************************\n");

  printf("Voce digitou o numero inteiro: %d\n", numeroInteiro);
  printf("Voce digitou o numero decimal: %f\n", numeroDecimal);
  printf("Voce digitou a letra: %c\n", letra);

  printf("*****************************************\n");

  printf("Fim do programa...\n");

  return 0;
}
