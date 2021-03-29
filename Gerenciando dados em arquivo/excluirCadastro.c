#include <stdio.h>
#include <stdlib.h>
#include "prototipos.h"

void excluirCadastro (void)
{
	int numeroDoCadastro , opcao = 0;
	struct cadastroPessoa leituraCadastro;
	struct cadastroPessoa cadastroBranco = {0,"",0,""};
	FILE *ponteiro = fopen("arquivo.dat","rb+");

	printf( "Número do Cadastro >_" );
	scanf("%d",&numeroDoCadastro);
	setbuf(stdin,NULL);

	fseek(ponteiro,(numeroDoCadastro - 1) * sizeof(struct cadastroPessoa),SEEK_SET);
	fread(&leituraCadastro,sizeof(struct cadastroPessoa),1,ponteiro);
	printf( "Número: %d\n"
			"Nome: %s"
			"Idade: %d\n"
			"CPF: %s\n",
			leituraCadastro.numero,
			leituraCadastro.nome,
			leituraCadastro.idade,
			leituraCadastro.cpf );

	printf( "Excluir?\n"
			"[1] - Confirmar\n"
			"[0] - Cancelar\n\n"
			">_" );
	scanf("%d",&opcao);
	setbuf(stdin,NULL);

	if(opcao == 1)
	{
		fseek(ponteiro,(numeroDoCadastro - 1) * sizeof(struct cadastroPessoa),SEEK_SET);
		fwrite(&cadastroBranco,sizeof(struct cadastroPessoa),1,ponteiro);
		fclose(ponteiro);
	}
}
