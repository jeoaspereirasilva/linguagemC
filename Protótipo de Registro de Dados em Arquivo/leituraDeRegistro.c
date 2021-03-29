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
			printf( "\n\n"
					"\tNumero do Cadastro: %d\n"
					"\tNome Completo: %s\n"
					"\tIdade: %d\n"
					"\tNúmero de Telefone: %s\n"
					"\tEndereço de Email: %s\n",
					armazenaRegistro.numero,
					armazenaRegistro.nome,
					armazenaRegistro.idade,
					armazenaRegistro.telefone,
					armazenaRegistro.email);
			fread(&armazenaRegistro, sizeof(struct cadastroPessoa),1,ponteiro);
		}//fim da estrutura if else
	}//fim da estrutura while
	fclose(ponteiro);
	getchar();
}
