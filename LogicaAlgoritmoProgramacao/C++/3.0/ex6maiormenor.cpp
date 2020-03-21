#include<stdio.h>
#include<stdlib.h>
main()
{
	int x, numero;
	double maior, menor;
	for(x=0, x>1; x<5; x++)
	{
		printf("Digite seu numero: ");
		scanf("%f", &numero);
		printf("Digite seu segundo numero: ");
		scanf("%f", &numero);
	}
	switch(numero)
	{
		case 1:
		printf("Seu numero e maior");
		scanf("%f", maior);
		break;

		case 2:
		printf("Seu numero e menor");
		scanf("%f", menor);
		break;

		default:
		printf("Os numeros sao iguais \n");
		break;
	}
}
