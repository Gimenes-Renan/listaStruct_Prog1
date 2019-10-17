/*
Criar dois vetores de cinco posições, sendo que cada vetor corresponde a um jogador.
O vetor é especificado pela struct Lutador, com os seguintes campos:
• Nome do lutador
• Poder do jogador (valor inteiro gerado pela função rand)
O nome do lutador deverá ser preenchido pelo usuário e o poder da arma deverá ser
gerado pela função rand (não mostrar o valor gerado ao preencher).
O jogo consiste em comparar cada posição de um vetor com a mesma posição do
outro vetor e mostrar o nome, poder e qual dos dois venceu a batalha (maior poder).
*/

#include<stdio.h>
#include <stdlib.h>

struct lutador{
	char nome[20];
	int poder;
};

main(){
	lutador jogador1[5], jogador2[5];
	
	for (int i = 0; i<5; i++){
		printf("Escreva o nome do Jogador 1, Lutador %d :", i);
		scanf("%s", jogador1[i].nome);
		jogador1[i].poder = rand();
		printf("Escreva o nome do Jogador 2, Lutador %d :", i);
		scanf("%s", jogador2[i].nome);
		jogador2[i].poder = rand();
	}
	
	for (int i = 0; i<5; i++){
		printf("Batalha # %d", i);
		printf("\nVencedor: ");
		if (jogador1[i].poder>jogador2[i].poder){
			printf("%s \n", jogador1[i].nome);
		} else if (jogador2[i].poder>jogador1[i].poder){
			printf("%s \n", jogador2[i].nome);
		} else {
			printf("EMPATE!!\n");
		}
	}
}
