#include<stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<string.h>

int main()
{
	char *nome;
	int n;
	printf("DIGITE O VALOR DE N:");
	scanf("%s",&n);
	nome=(char *)calloc(n,sizeof(char));
	strcpy(nome,"EU AMO ESTUDAR A LINGUAGEM C");
	printf("\n %s",nome);
}
