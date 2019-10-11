#include<stdio.h>

struct dataNascimento{
	int dia, mes, ano;
};

struct pessoa{
	char nome[20];
	float altura;
	dataNascimento dataNascimento;
};


main(){
	pessoa pessoa[10];
	
	for (int i = 0; i<10; i++){
		printf("Insira o nome:");
		fflush(stdin);
		gets(pessoa[i].nome);
		
		printf("Insira a altura");
		scanf("%f", &pessoa[i].altura);
		
		printf("Insira o DIA de Nascimento: ");
		scanf("%d", &pessoa[i].dataNascimento.dia);
		
		printf("Insira o MES de Nascimento: ");
		scanf("%d", &pessoa[i].dataNascimento.mes);
		
		printf("Insira o ANO de Nascimento: ");
		scanf("%d", &pessoa[i].dataNascimento.ano);
	}
}

