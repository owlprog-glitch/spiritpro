#include<stdio.h>
#include<stdlib.h>
main()
{
	int valor, v1, v2, soma;
	printf("Digite o primeiro valor: ");
	scanf("%i", &v1);
	printf("Digite o segundo valor: ");
	scanf("%i", &v2);
	valor=(v1+v2);
	
	if(valor>=10)
	{
		printf("Seu numero e: %i\n",valor);
		printf("Seu numero e maior que o valor desejado");
	}
	else
	{
		printf("Seu numero e: %i\n",valor);
		printf("Seu numero nao e maior que esse valor desejado",valor);
	}
	system("pause");
}
