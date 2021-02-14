/*
    Salvando dados do programa no arquivo
*/

#include <stdio.h>
#include <stdlib.h>

void entradaDados (void);
void salvarContato (void);

int opcao = 1;
char nome [10] = "";
char sobrenome [15] = "";
char telefone [10] = "";
char email [30] = "";
int cadastrarNovo;

/* Função principal que inicializa o programa */
int main (void)
{
    while(opcao != 0)
    {
        system("clear");
        printf("\n\n\n");
        printf("\t***********************************\n");
        printf("\tAgenda de contatos\n");
        printf("\t***********************************\n");
        printf("\t[1] - Agendar contato\n");
        printf("\t[0] - Encerrar programa\n");
        printf("\tDigite uma opcao e pressione 'Enter'\n");
        printf("\t>_");
        scanf("%d",&opcao);
        
        if(opcao == 1)
        {
            entradaDados();
        }
        else if (opcao == 0)
        {
            system("clear");
            printf("\n\n\n");
            printf("\t***********************************\n");
            printf("\tPrograma encerrado...\n");
            printf("\t***********************************\n");
        }
        
    }/* Fim do while da função main */

    return 0;
}/* Fim da função principal main */

void entradaDados (void)
{
    do
    {
        system("clear");
        printf("\n\n\n");
        printf("\t***********************************\n");
        printf("\tCadastrar contato\n");
        printf("\t***********************************\n");
        printf("\tDigite o primeiro nome >_");
        scanf("%s", nome);
        printf("\tDigite o ultimo nome >_");
        scanf("%s", sobrenome);
        printf("\tDigite o numero de telefone >_");
        scanf("%s", telefone);
        printf("\tDigite o e-mail >_");
        scanf("%s", email);

        salvarContato ();

        system("clear");
        printf("\n\n\n");
        printf("\t***********************************\n");
        printf("\tDeseja salvar outro contato?...\n");
        printf("\t***********************************\n");
        printf("\t[1] - Agendar contato\n");
        printf("\t[0] - Cancelar\n");
        printf("\tDigite uma opcao e pressione 'Enter'\n");
        printf("\t>_");
        scanf("%d",&cadastrarNovo);
    } while (cadastrarNovo != 0);
    
}/* Fim da função entradaDados */

void salvarContato (void)/* Função salvar contato no arquivo */
{
    FILE *arquivoContato;
    arquivoContato = fopen("agendaContatos.txt","a");
    fprintf(arquivoContato, "\n");
    fprintf(arquivoContato, "******************************************\n");
    fprintf(arquivoContato, "Nome: %s\n", nome);
    fprintf(arquivoContato, "Sobrenome: %s\n", sobrenome);
    fprintf(arquivoContato, "Numero de telefone: %s\n", telefone);
    fprintf(arquivoContato, "e-mail: %s\n", email);
    fprintf(arquivoContato, "******************************************\n");
    fclose(arquivoContato);
}