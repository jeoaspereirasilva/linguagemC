#include <stdio.h>
#include <stdlib.h>
#include "prototipos.h"

void excluirCadastro (void)
{
	int numeroDoCadastro , opcao = 0;
	struct cadastroPessoa leituraCadastro;
	struct cadastroPessoa cadastroBranco = {0,"",0,""};
	FILE *ponteiro = fopen("arquivo.dat","rb+");

	printf( "\n\tNúmero do Cadastro >_" );
	scanf("%d",&numeroDoCadastro);
	setbuf(stdin,NULL);

	fseek(ponteiro,(numeroDoCadastro - 1) * sizeof(struct cadastroPessoa),SEEK_SET);
	fread(&leituraCadastro,sizeof(struct cadastroPessoa),1,ponteiro);
	printf( "\n\n"
			"\tNúmero: %d\n"
			"\tNome Completo: %s\n"
			"\tIdade: %d\n"
			"\tNúmero de Telefone: %s\n"
			"\tEndereço de Email: %s\n",
			leituraCadastro.numero,
			leituraCadastro.nome,
			leituraCadastro.idade,
			leituraCadastro.telefone,
			leituraCadastro.email );

	printf( "\n\tExcluir?\n"
			"\t[1] - Confirmar\n"
			"\t[0] - Cancelar\n\n"
			"\t>_" );
	scanf("%d",&opcao);
	setbuf(stdin,NULL);

	if(opcao == 1)
	{
		fseek(ponteiro,(numeroDoCadastro - 1) * sizeof(struct cadastroPessoa),SEEK_SET);
		fwrite(&cadastroBranco,sizeof(struct cadastroPessoa),1,ponteiro);
		fclose(ponteiro);
	}
}
