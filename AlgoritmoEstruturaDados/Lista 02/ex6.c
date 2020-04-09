#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main()
{
	int i,j,matriz[3][3];
	int impares;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("\n ELEMENTO:");
			scanf("%d",&matriz[i][j]);
			if(matriz[i][j]!=0)
			impares++;
		}
	}
		for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d ",matriz[i][j]);	
		}
		printf("\n");
	}
	printf("\n QUANTIDADE DE NÚMEROS IMPARES = %d",impares);
}
