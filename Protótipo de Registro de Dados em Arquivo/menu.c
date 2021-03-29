#include <stdio.h>
#include <stdlib.h>
#include "prototipos.h"

int main (void)
{
	int exibirMenu = 1 , opcao = 0;

	while(exibirMenu != 0)
	{
		system("clear");
		printf( "\n\n\n"
				"\t[1] - Armazenar Contas em Branco\n"
				"\t[2] - Inserir Novo Cadastro\n"
				"\t[3] - Consultar Cadastro\n"
				"\t[4] - Alterar Cadastro\n"
				"\t[5] - Leitura de Registro\n"
				"\t[6] - Excluir Cadastro\n"
				"\t[7] - Encerrar Programa\n\n"
				"\t>_");
		scanf("%d",&opcao);
		setbuf(stdin,NULL);

		switch(opcao)
		{
			case 1:
				armazenaContasEmBranco();
				break;
			case 2:
				inserirNovoCadastro();
				break;
			case 3:
				consultarCadastro();
				break;
			case 4:
				alterarCadastro();
				break;
			case 5:
				leituraDeRegistro();
				break;
			case 6:
				excluirCadastro();
				break;
			case 7:
				exibirMenu = 0;
				break;
			default:
				printf("Opção inválida ");
				getchar();
		}//fim da estrutura switch
	}
	system("clear");
	printf( "\n\n"
			"\tSistema encerrado...\n"
			"\t********************************\n\n" );

	return 0;
}
