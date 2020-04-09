#include<stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
	int **v,par=0,impar=0;
	int i,j,n,m;
	printf("\n DIGITE O VALOR DE N:");
	scanf("%d",&n);
	printf("\n DIGITE O VALOR DE M:");
	scanf("%d",&m);
	int soma=0;
	v=(int **)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	{
		v[i]= (int *)malloc(n*sizeof(int));
		for(j=0;j<m;j++)
		{	
			printf("ELEMENTO:");
			scanf("%d",&v[i][j]);
			soma=soma+v[i][j];
			if(v[i][j]%2==0)
			par++;
			else
			impar++;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",v[i][j]);
		}
		printf("\n");
	}
	printf("\n SOMA = %d",soma);
	printf("\n QUANTI PAR = %d",par);
	printf("\n QUANTI IMPAR = %d",impar);

}
