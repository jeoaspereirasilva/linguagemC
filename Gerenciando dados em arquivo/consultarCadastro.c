#include <stdio.h>
#include <stdlib.h>
#include "prototipos.h"

void consultarCadastro (void)
{
    int numeroDaConta;
    struct cadastroPessoa leituraDeCadastro;
    FILE *ponteiro = fopen("arquivo.dat","rb");
    if(ponteiro == NULL)
    {
        printf("ERRO! na abertura do arquivo ");
        getchar();
    }
    else{
        printf("Informe o número da conta ");
        scanf("%d",&numeroDaConta);
        setbuf(stdin,NULL);

        fseek(ponteiro,(numeroDaConta - 1) * sizeof(struct cadastroPessoa),SEEK_SET);
        fread(&leituraDeCadastro,sizeof(struct cadastroPessoa),1,ponteiro);

        if(leituraDeCadastro.numero == 0)
        {
            printf("Esta conta não possui informações ");
            getchar();
        }
        else{
            //fread(&leituraDeCadastro,sizeof(struct cadastroPessoa),1,ponteiro);
            printf( "Numero: %d\n"
                    "Nome: %s"
                    "Idade: %d\n"
                    "CPF: %s\n",
                    leituraDeCadastro.numero,
                    leituraDeCadastro.nome,
                    leituraDeCadastro.idade,
                    leituraDeCadastro.cpf);
                    fread(&leituraDeCadastro, sizeof(struct cadastroPessoa),1,ponteiro);
            getchar();
            fclose(ponteiro);
        }//fim da estrutura if else
    }   
}