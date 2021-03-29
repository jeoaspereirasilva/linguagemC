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
        printf("\n\tERRO! na leitura do arquivo ");
        getchar();
    }
    else{
        printf( "\n\tNúmero do Cadastro: " );
		scanf("%d",&numeroDoCadastro);
		setbuf(stdin,NULL);

		fseek(ponteiro,(numeroDoCadastro - 1) * sizeof(struct cadastroPessoa),SEEK_SET);
		fread(&leituraCadastro,sizeof(struct cadastroPessoa),1,ponteiro);

        printf( "\n\n"
                "\tNumero do Cadastro: %d\n"
                "\tNome Completo: %s\n"
                "\tIdade: %d\n"
                "\tNúmero de Telefone: %s\n"
                "\tEndereço de Email: %s\n",
                leituraCadastro.numero,
                leituraCadastro.nome,
                leituraCadastro.idade,
                leituraCadastro.telefone,
                leituraCadastro.email);

        printf( "\n\t********************************\n"
                "\t[1] - Alterar Nome Completo\n"
                "\t[2] - Alterar Idade\n"
                "\t[3] - Alterar Número de Telefone\n"
                "\t[4] - Alterar Endereço de Email\n"
                "\t>_" );
        scanf("%d",&opcaoDoMenuDeAlteracao);
        setbuf(stdin,NULL);
        switch(opcaoDoMenuDeAlteracao)
        {
            case 1:
                printf("\n\n");
                printf( "\tNovo Nome Completo >_" );
                fgets(leituraCadastro.nome,50,stdin);
                setbuf(stdin,NULL);
                break;
            case 2:
                printf( "\tNova Idade >_" );
                scanf("%d",&leituraCadastro.idade);
                setbuf(stdin,NULL);
                break;
            case 3:
                 printf("\tNovo Número de Telefone >_");
                 fgets(leituraCadastro.telefone,15,stdin);
                 setbuf(stdin,NULL);
                 break;
            case 4:
                 printf("\tNovo Endereço de Email >_");
                 fgets(leituraCadastro.email,60,stdin);
                 setbuf(stdin,NULL);
                 break;
            default:
                  printf("\tOpção inválida ");
                  getchar();
        }//fim da estrutura switch
        rewind(ponteiro);
        fseek(ponteiro,(numeroDoCadastro - 1) * sizeof(struct cadastroPessoa),SEEK_SET);
        fwrite(&leituraCadastro,sizeof(struct cadastroPessoa),1,ponteiro);
    }//fim da estrutura if else
    fclose(ponteiro);
}