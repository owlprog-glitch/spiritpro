#include<stdio.h>
#include<stdlib.h>
main()
{
	int valor, v1, v2, v3;
	printf("Digite o primeiro valor: ");
	scanf("%i", &v1);
	printf("Digite o segundo valor: ");
	scanf("%i", &v2);
	printf("Digite o terceiro valor: ");
	scanf("%i", &v3);
	valor=(v1+v2+v3);
	
	if(valor>=0)
	{
		printf("Seu numero e: %i\n",valor);
		printf("Seu numero e maior");
	}
	else
	{
		printf("Seu numero e: %i\n",valor);
		printf("Seu numero nao e maior\n",valor);
	}
	system("pause");
}
