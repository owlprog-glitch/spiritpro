#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>


int main()
{
	int opcao;
	do
	{
	char *nome;
	int *nota;
	int media=0,soma=0;
	int zeradas;
	int n,i;
	printf("\n DIGITE O VALOR DE n:");
	scanf("%d",&n);
	nome=(char *)malloc(n*sizeof(int));
	printf("\n DIGITE O NOME DO ALUNO:");
	scanf("%s",&nome);
	fflush(stdin);
	nota=(int *)malloc(n*sizeof(int));
	if(nota==NULL || nome==NULL)
	{
		printf("\n MEMÓRIA INSUFICIENTE!!!");
		exit(1);
	}
	else
	{
		for(i=0;i<n;i++)
		{
			printf("\n NOTA %d:",i+1);
			scanf("%d",&nota[i]);
			soma=soma+nota[i];
			media=soma/n;
			if(nota[i]==0)
			zeradas++;
		}
	printf("\n SOMA = %d",soma);
	printf("\n MEDIA = %d",media);
	printf("\n NOTAS ZERADAS = %d",zeradas);
	}
	printf("\n DESEJA CONTINUAR NO PROGRAMA: <1>SIM E <2>NÃO");
	scanf("%d",&opcao);
}while(opcao==1);
}
