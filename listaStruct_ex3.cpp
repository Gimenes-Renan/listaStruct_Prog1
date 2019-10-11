#include<stdio.h>

struct livro {
	char titulo[50];
	int anoEdicao;
	int nPaginas;
	float preco;
};

main(){
	livro livro[5];
	for (int i = 0; i<5; i++){
		printf("Digite o titulo do livro");
		fflush(stdin);
		gets(livro[i].titulo);
		
		printf("Digite o ano de Edicao do Livro");
		scanf("%d", &livro[i].anoEdicao);
		
		printf("Digite o numero de Paginas do Livro");
		scanf("%d", &livro[i].nPaginas);
		
		printf("Digite o preco do livro");
		scanf("%f", &livro[i].preco);
	}
	
	int mediaPaginas = 0, somaPaginas = 0;
	for (int i = 0; i<5; i++){
		somaPaginas += livro[i].nPaginas;
	}
	mediaPaginas = somaPaginas/5;
	
	printf("Media de Paginas dos Livros: %d", mediaPaginas);
}

