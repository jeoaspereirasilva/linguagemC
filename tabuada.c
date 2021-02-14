#include <stdio.h>

int main (void)
{
	int fator1 = 0 , fator2 = 0 , produto = 0;

	printf("Digite um numero inteiro >_");
	scanf("%d", &fator1);

	while( fator2 <= 10 )
	{
		printf("%d X %d = %d\n", fator1 , fator2 , produto);
		fator2++;
		produto += fator1;
	}
	printf("Fim do programa...\n");
	return 0;
}
