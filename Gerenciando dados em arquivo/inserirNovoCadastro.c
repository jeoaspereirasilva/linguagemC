#include <stdio.h>
#include <stdlib.h>
#include "prototipos.h"

void inserirNovoCadastro (void)
{
	int numeroDoCadastro;
	struct cadastroPessoa novoCadastro = {0,"",0,""};
	FILE *ponteiro = fopen("arquivo.dat","rb+");
	if(ponteiro == NULL)
	{
		printf( "ERRO! na leitura do arquivo\n"
				"Arquivo de Banco de Dados não localizado ");
		getchar();
	}
	else{
		printf( "Número do Cadastro: " );
		scanf("%d",&numeroDoCadastro);
		setbuf(stdin,NULL);

		fseek(ponteiro,(numeroDoCadastro - 1) * sizeof(struct cadastroPessoa),SEEK_SET);
		fread(&novoCadastro,sizeof(struct cadastroPessoa),1,ponteiro);

		if(novoCadastro.numero != 0)
		{
			printf( "Esta conta já possui informações " );
			getchar();
		}
		else{
			printf( "Informe o nome: " );
			fgets(novoCadastro.nome,50,stdin);
			setbuf(stdin,NULL);
			printf( "Informe a idade: " );
			scanf("%d",&novoCadastro.idade);
			setbuf(stdin,NULL);
			printf( "Informe o CPF: " );
			fgets(novoCadastro.cpf,15,stdin);
			setbuf(stdin,NULL);

			novoCadastro.numero = numeroDoCadastro;

			fseek(ponteiro,(numeroDoCadastro - 1) * sizeof(struct cadastroPessoa),SEEK_SET);
			fwrite(&novoCadastro,sizeof(struct cadastroPessoa),1,ponteiro);
		}
	}
	fclose(ponteiro);
}
