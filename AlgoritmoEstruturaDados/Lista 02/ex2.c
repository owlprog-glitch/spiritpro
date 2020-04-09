#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int potencia(int x)
{
	int resultado;
	resultado=pow(x,2);
	return resultado;
}

int main()
{
	int *v,resultado;
	int i;
	int n;
	printf("\n DIGITE O VALOR DE n:");
	scanf("%d",&n);
	v=(int *)malloc(n*sizeof(int));
	if(v==NULL)
	{
		printf("\n MEMÓRIA INSUFICIENTE!!!");
	}
	else
	{
		for(i=0;i<n;i++)
		{
			printf("\n ELEMENTO %d:",i+1);
			scanf("%d",&v[i]);
			resultado=potencia(v[i]);
			printf("\n%d",resultado);
		}
	}
}
