#include<stdio.h>

struct habitante {
	int idade;
	char sexo[10];
	float salario;
	int nFilhos;
};

main(){
	habitante habitante[500]; //todo criar vetor de habitantes e estrutura FOR
	
	for (int i = 0; i<500; i++){
		printf("Digite idade do habitante: ");
		scanf("%d", &habitante[i].idade);
		
		printf("Digite o sexo do habitante: ");
		fflush(stdin);
		gets(habitante[i].sexo);
		
		printf("Digite o salario do habitante: ");
		scanf("%f", &habitante[i].salario);
		
		printf("Digite o numero de filhos do habitante: ");
		scanf("%d", &habitante[i].nFilhos);
	}
	
	for (int i = 0; i< 500; i++){
		printf("Habitante %d %d %s %f %d \n",i, habitante[i].idade, habitante[i].sexo, habitante[i].salario, habitante[i].nFilhos);
	}


}

