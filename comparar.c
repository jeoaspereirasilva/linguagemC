/*
	14/jan/2021 - 22:13
*/


#include <stdio.h>
#include <string.h>

int main (void)
{
	char string1 [15] = "14012021\n";
	char string2 [15];

	printf("Digite a String2 >_");
	fgets(string2,10,stdin);

	if(strcmp(string1,string2) == 0)
	{
		printf("Strings iguais\n");
	}
	else{
		printf("Strings diferentes\n");
	}
	printf("Fim do programa...\n");
	return 0;
}
