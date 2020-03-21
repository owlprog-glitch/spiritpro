#include<stdio.h>
#include<stdlib.h>
main()
{
	int x, idade, quant=0;
	float peso, media=0;
	for(x=0; x<3;x++)
	{
		printf("Idade: ");
		scanf("%d", &idade);
		printf("Peso: ");
		scanf("%d", &peso);
		media=media+idade;
		if(peso>90)
		{
			quant++;
		}
	}
	media=media/3;
	printf("Quantidades de pessoas com peso maior que 90kg: %d\n", quant);
	printf("Media das idades: %d\n", media);
	
}
