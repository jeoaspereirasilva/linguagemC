#include <stdio.h>
#include <stdlib.h>
#include "prototipos.h"

void alterarCadastro (void)
{
    int numeroDoCadastro , opcaoDoMenuDeAlteracao = 0;
    struct cadastroPessoa leituraCadastro;
    FILE *ponteiro = fopen("arquivo.dat","rb+");
    if(ponteiro == NULL)
    {
        printf("ERRO! na leitura do arquivo ");
        getchar();
    }
    else{
        printf( "Número do Cadastro: " );
		scanf("%d",&numeroDoCadastro);
		setbuf(stdin,NULL);

		fseek(ponteiro,(numeroDoCadastro - 1) * sizeof(struct cadastroPessoa),SEEK_SET);
		fread(&leituraCadastro,sizeof(struct cadastroPessoa),1,ponteiro);

        printf( "Numero: %d\n"
                "Nome: %s"
                "Idade: %d\n"
                "CPF: %s\n",
                leituraCadastro.numero,
                leituraCadastro.nome,
                leituraCadastro.idade,
                leituraCadastro.cpf);

        printf( "\n********************************\n"
                "[1] - Alterar Nome\n"
                "[2] - Alterar Idade\n"
                "[3] - Alterar CPF\n\n"
                ">_" );
        scanf("%d",&opcaoDoMenuDeAlteracao);
        setbuf(stdin,NULL);
        switch(opcaoDoMenuDeAlteracao)
        {
            case 1:
                printf( "Novo Nome >_" );
                fgets(leituraCadastro.nome,50,stdin);
                setbuf(stdin,NULL);
                break;
            case 2:
                printf( "Nova Idade >_" );
                scanf("%d",&leituraCadastro.idade);
                setbuf(stdin,NULL);
                break;
            case 3:
                 printf("Novo CPF >_");
                 fgets(leituraCadastro.cpf,15,stdin);
                 setbuf(stdin,NULL);
            default:
                  printf("Opção inválida ");
                  getchar();
        }//fim da estrutura switch
        rewind(ponteiro);
        fseek(ponteiro,(numeroDoCadastro - 1) * sizeof(struct cadastroPessoa),SEEK_SET);
        fwrite(&leituraCadastro,sizeof(struct cadastroPessoa),1,ponteiro);
    }//fim da estrutura if else
    fclose(ponteiro);
}