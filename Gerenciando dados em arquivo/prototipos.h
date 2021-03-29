#ifndef PROTOTIPOS_H_INCLUDED
#define PROTOTIPOS_H_INCLUDED

struct cadastroPessoa {
		int numero;
		char nome [50];
		int idade;
		char cpf [15];
};

void armazenaContasEmBranco (void);
void inserirNovoCadastro (void);
void gravarDadosNoRegistro (struct cadastroPessoa novoCadastro);
void consultarCadastro (void);
void alterarCadastro (void);
void leituraDeRegistro (void);
void excluirCadastro (void);

#endif
