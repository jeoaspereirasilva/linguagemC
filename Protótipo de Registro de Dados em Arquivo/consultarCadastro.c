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
        printf("\n\tERRO! na abertura do arquivo ");
        getchar();
    }
    else{
        printf("\n\tInforme o número do Cadastro ");
        scanf("%d",&numeroDaConta);
        setbuf(stdin,NULL);

        fseek(ponteiro,(numeroDaConta - 1) * sizeof(struct cadastroPessoa),SEEK_SET);
        fread(&leituraDeCadastro,sizeof(struct cadastroPessoa),1,ponteiro);

        if(leituraDeCadastro.numero == 0)
        {
            printf("\n\tEsta conta não possui informações ");
            getchar();
        }
        else{
            //fread(&leituraDeCadastro,sizeof(struct cadastroPessoa),1,ponteiro);
            printf( "\n\n"
                    "\tNumero do Cadastro: %d\n"
                    "\tNome Completo: %s"
                    "\tIdade: %d\n"
                    "\tNúmero de Telefone: %s"
                    "\tEndereço de Email: %s\n",
                    leituraDeCadastro.numero,
                    leituraDeCadastro.nome,
                    leituraDeCadastro.idade,
                    leituraDeCadastro.telefone,
                    leituraDeCadastro.email);
                    fread(&leituraDeCadastro, sizeof(struct cadastroPessoa),1,ponteiro);
            getchar();
            fclose(ponteiro);
        }//fim da estrutura if else
    }   
}