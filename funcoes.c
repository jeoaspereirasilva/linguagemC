/*
 *  Funções em linguagem C
 *  Definindo o programa em blocos de operação
 *
 * */

#include <stdio.h>

  int primeiroNumero;
  int segundoNumero;
  int resultado;

  void funcaoEntradaDeNumeros (void)
  {
    printf("Digite um numero inteiro >_");
    scanf("%d",&primeiroNumero);

    printf("Digite outro numero inteiro >_");
    scanf("%d",&segundoNumero);

  }

  int funcaoSomarNumeros (int primeiroNumero , int segundoNumero)
  {
    return primeiroNumero + segundoNumero;
  }

/* A função main é a função principal que inicializa o programa */
int main (void)
{
  
  funcaoEntradaDeNumeros ();/* Chamando a função de entrada de dados */

  funcaoSomarNumeros (primeiroNumero, segundoNumero);/* Chamando a função soma */
  
  /* Recebendo o resultado da função de soma */
  resultado = funcaoSomarNumeros(primeiroNumero,segundoNumero);

  printf("Resultado da soma: %d\n", resultado);

  printf("Fim do programa...\n");
  return 0;
}
