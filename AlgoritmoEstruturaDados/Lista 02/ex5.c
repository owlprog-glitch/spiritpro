#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main()
{
	int opcao;
	do
	{
	int n,fat=1;
	int i;
	printf("\n DIGITE O NÚMERO:");
	scanf("%d",&n);
	for(fat=1;n>1;n=n-1)
	{
		fat=fat*n;
	}
	printf("\n%d",fat);
	printf("\n DESEJA CONTINUAR: <1> SIM E <2> NAO");
	scanf("%d",&opcao);
}while(opcao==1);
}
