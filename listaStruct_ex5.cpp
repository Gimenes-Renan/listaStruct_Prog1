/*
5. Crie uma estrutura representando os alunos do curso de Introdução a Programação de
Computadores. A estrutura deve conter a matrícula do aluno, nome, nota da primeira
prova e nota da segunda prova.
a) Permita ao usuário entrar com os dados de 5 alunos.
b) Encontre o aluno com maior nota da primeira prova.
c) Encontre o aluno com maior media geral.
d) Encontre o aluno com menor media geral.
e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o
valor 6,0 para aprovação. 
*/

#include<stdio.h>

struct aluno{
	int matricula;
	char nome[50];
	float notaP1, notaP2, mediaGeral;
};

main(){
	aluno aluno[5];
	
	float maiorNotaP1 = 0.0;
	float maiorMediaGeral = 0.0;
	float menorMediaGeral = 0.0;
	
	for (int i=0; i<5; i++){
		printf("Matricula do Aluno:");
		scanf("%d", &aluno[i].matricula);
		
		printf("Nome do aluno:");
		fflush(stdin);
		gets(aluno[i].nome);
		
		printf("Nota P1:");
		scanf("%f", &aluno[i].notaP1);
		
		printf("Nota P2:");
		scanf("%f", &aluno[i].notaP2);
		
		aluno[i].mediaGeral = (aluno[i].notaP1 + aluno[i].notaP2)/2.0;
		
		if (aluno[i].mediaGeral>maiorMediaGeral){
			maiorMediaGeral = aluno[i].mediaGeral;
		}
		if (aluno[i].mediaGeral<menorMediaGeral){
			menorMediaGeral = aluno[i].mediaGeral;
		}
		if (aluno[i].notaP1>maiorNotaP1){
			maiorNotaP1 = aluno[i].notaP1;
		}
	}
	
	
	
	
}

