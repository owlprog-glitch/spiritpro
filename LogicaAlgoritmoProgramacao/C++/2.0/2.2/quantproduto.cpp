#include<stdio.h>
#include<stdlib.h>

main()
{
	int codigo, quantidade;
	float total;
	printf("100 - Cachorro Quente - R$ 1.20\n");
	printf("101 - Hamburguer      - R$ 1.50\n");
	scanf("%d", &codigo);
	switch(codigo)
	{
		case 100:
			printf("Quantidade:\n");
			scanf("%d", &quantidade);
			total=quantidade*1.2;
			printf("Total: %f\n", total);
			break;
		case 101:
			printf("Quantidade:\n");
			scanf("%d", &quantidade);
			total=quantidade*1.5;
			printf("Total: %f\n", total);
			break;
		
		default:
			printf("Codigo Invalido");
			break;		
	}
}
