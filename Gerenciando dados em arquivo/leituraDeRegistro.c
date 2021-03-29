#include <stdio.h>
#include <stdlib.h>
#include "prototipos.h"

void leituraDeRegistro (void)
{
	struct cadastroPessoa armazenaRegistro;
	FILE *ponteiro = fopen("arquivo.dat","rb");
	fread(&armazenaRegistro, sizeof(struct cadastroPessoa),1,ponteiro);
	while(1)
	{
		if(feof(ponteiro))
		{
			break;
		}
		else{
			printf( "Numero: %d\n"
					"Nome: %s"
					"Idade: %d\n"
					"CPF: %s\n",
					armazenaRegistro.numero,
					armazenaRegistro.nome,
					armazenaRegistro.idade,
					armazenaRegistro.cpf);
			fread(&armazenaRegistro, sizeof(struct cadastroPessoa),1,ponteiro);
		}//fim da estrutura if else
	}//fim da estrutura while
	fclose(ponteiro);
	getchar();
}
