#include<stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
	int *v;
	int i,j,n,m,soma=0,media=0;
	printf("\n DIGITE O VALOR DE N:");
	scanf("%d",&n);
	v=(int *)calloc(n,sizeof(int));
	if(v==NULL)
	{
		printf("\n MEMÓRIA INSUFICIENTE!!!");
	}
	else
	{
	for(i=0;i<n;i++)
	{
			printf("ELEMENTO:");
			scanf("%d",&v[i]);
			soma=soma+v[i];
			media=soma/n;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",v[i]);
		printf("\n");
	}
	}
	printf(" \n soma = %d",soma);
	printf("\n media = %d",media);
}
