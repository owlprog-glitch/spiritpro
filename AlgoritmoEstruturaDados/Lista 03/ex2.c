#include<stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
float inverso(float x)
{
	float resultado;
	resultado=pow(x,-1);
	return resultado;
}

int main()
{
	float *v,resultado=0;
	int i,n;
	printf("\n DIGITE O VALOR DE N:");
	scanf("%d",&n);
	v=(float *)calloc(n,sizeof(float));
	if(v==NULL)
	{
		printf("\n MEMÓRIA INSUFICIENTE!!!");
	}
	else
	{
	for(i=0;i<n;i++)
	{
			printf("\n ELEMENTO:");
			scanf("%f",&v[i]);
			resultado=inverso(v[i]);
			printf("\n %f",resultado);
			
	}
}
}
