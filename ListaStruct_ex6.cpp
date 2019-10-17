/*
6. Fazer um programa para simular uma agenda de telefones. Para cada pessoa dever�
constar os seguintes dados:
� C�digo
� Nome
� E-mail
� Endere�o (contendo campos para Rua, numero, complemento, bairro, cep,
cidade, estado, pa�s).
� Telefone (contendo campo para DDD e numero)
� Data de aniversario (contendo campo para dia, m�s, ano).
� Observa��es: Uma linha (string) para alguma observa��o especial.
a) Definir a estrutura acima.
b) Declarar a vari�vel agenda (vetor) com capacidade de agendar at� 100
cadastros.
c) Possibilitar a visualiza��o dos dados.
*/
#include<stdio.h>

struct endereco{
	char rua[50], numero[10], complemento[50], bairro[30], cep[9], estado[2], pais[20];
};

struct telefone{
	int ddd;
	char numero[15];
};

struct dataNasc{
	int dia,mes,ano;
};

struct pessoa{
	int cod;
	char nome[50], email[50], observacoes[50];
	endereco endereco;
	telefone telefone;
	dataNasc dataNasc;
};


main(){
	pessoa pessoa[100];
	int codigoPesquisa;
	
	printf("Selecione o ID da pessoa que quer visualizar os dados: ");
	scanf("%d", &codigoPesquisa);
	
	printf("%s %s", pessoa[codigoPesquisa].nome, pessoa[codigoPesquisa].email);	
}
