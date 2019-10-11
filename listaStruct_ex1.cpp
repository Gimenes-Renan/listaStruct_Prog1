#include<stdio.h>

struct banda {
	char nome[50];
	char tipoMusica[50];
	int nIntegrantes;
	int valorShow;
};

main(){
	banda banda;
	
	printf("Digite o nome da banda: ");
	fflush(stdin);
	gets(banda.nome);
	
	printf("Digite o tipo de Musica: ");
	gets(banda.tipoMusica);
	
	printf("Digite o numero de integrantes:");
	scanf("%d", &banda.nIntegrantes);
	
	printf("Digite o valor do show:");
	scanf("%d", &banda.valorShow);
	
	printf("%s %s %d %d",banda.nome, banda.tipoMusica, banda.nIntegrantes, banda.valorShow);
			
}

