#include <stdio.h>
#include <stdlib.h>
#include "prototipos.h"

void inserirNovoCadastro (void)
{
	int numeroDoCadastro;
	struct cadastroPessoa novoCadastro = {0,"",0,"",""};
	FILE *ponteiro = fopen("arquivo.dat","rb+");
	system("clear");
	if(ponteiro == NULL)
	{
		printf( "ERRO! na leitura do arquivo\n"
				"Arquivo de Banco de Dados não localizado ");
		getchar();
	}
	else{
		printf("\n\n"
				"\tNovo Cadastro\n"
				"\t======================================\n\n");
		printf( "\tNúmero do Cadastro: " );
		scanf("%d",&numeroDoCadastro);
		setbuf(stdin,NULL);

		fseek(ponteiro,(numeroDoCadastro - 1) * sizeof(struct cadastroPessoa),SEEK_SET);
		fread(&novoCadastro,sizeof(struct cadastroPessoa),1,ponteiro);

		if(novoCadastro.numero != 0)
		{
			printf( "\tEsta conta já possui informações " );
			getchar();
		}
		else{
			printf( "\tNome Completo >_ " );
			fgets(novoCadastro.nome,50,stdin);
			setbuf(stdin,NULL);
			printf( "\tIdade >_ " );
			scanf("%d",&novoCadastro.idade);
			setbuf(stdin,NULL);
			printf( "\tNúmero de Telefone >_ " );
			fgets(novoCadastro.telefone,20,stdin);
			setbuf(stdin,NULL);
			printf( "\tEndereço de Email >_" );
			fgets(novoCadastro.email,60,stdin);
			setbuf(stdin,NULL);

			novoCadastro.numero = numeroDoCadastro;

			fseek(ponteiro,(numeroDoCadastro - 1) * sizeof(struct cadastroPessoa),SEEK_SET);
			fwrite(&novoCadastro,sizeof(struct cadastroPessoa),1,ponteiro);
		}
	}
	fclose(ponteiro);
}
