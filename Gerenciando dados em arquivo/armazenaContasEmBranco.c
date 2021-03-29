#include <stdio.h>
#include <stdlib.h>
#include "prototipos.h"

void armazenaContasEmBranco (void)
{
	struct cadastroPessoa contasEmBranco = {0,"",0,""};
	int contador;
	FILE *ponteiro = fopen("arquivo.dat","wb");
	for(contador = 0; contador <= 100; contador++)
	{
		fwrite(&contasEmBranco,sizeof(struct cadastroPessoa),1,ponteiro);
	}
	fclose(ponteiro);
}
