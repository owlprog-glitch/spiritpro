#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

struct aluno
{
	char nome[100];
	int RG;
	int CPF;
	int nota1,nota2,nota3,nota4;
};

int main()
{
	struct aluno joao;
	int soma=0;
	int media=0;
	int CPF=0;
	printf("DIGITE O NOME DO ALUNO:");
	gets(joao.nome);
	printf("\n RA:");
	scanf("%d",&joao.RG);
	printf("\n CPF:");
	scanf("%d",&joao.CPF);
	printf("\n NOTA 1:");
	scanf("%d",&joao.nota1);
	printf("\n NOTA 2:");
	scanf("%d",&joao.nota2);
	printf("\n NOTA 3:");
	scanf("%d",&joao.nota3);
	printf("\n NOTA 4:");
	scanf("%d",&joao.nota4);
	soma=joao.nota1+joao.nota2+joao.nota3+joao.nota4;
	media=soma/4;
	printf("\n NOME= %s",joao.nome);
	printf("\n RG = %d",joao.RG);
	printf("\n CPF = %d",joao.CPF);
	printf("\n NOTA1 = %d",joao.nota1);
	printf("\n NOTA2 = %d",joao.nota2);
	printf("\n NOTA3 = %d",joao.nota3);
	printf("\n NOTA4 = %d",joao.nota4);
	printf("\n SOMA = %d",soma);
	printf("\n MEDIA = %d",media);
	}
