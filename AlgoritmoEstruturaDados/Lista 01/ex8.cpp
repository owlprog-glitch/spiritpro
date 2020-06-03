#include<stdio.h>
#include<stdlib.h>
main()
{
	char nome, s, n;
	int x, ra, rg, cpf;
	float nota, media=0;
	
	printf("Digite seu Nome:");
	scanf("%c", &nome);
	printf("Digite seu RA:");
	scanf("%i", &ra);
	printf("Digite seu CPF:");
	scanf("%i", &cpf);
	printf("Digite seu RG:");
	scanf("%i", &rg);

	for(x=0;x<4;x++)
	{
		printf("Entre com sua nota: ");
		scanf("%f", &nota);
		media=media+nota;
	}
	media=media/3;
	printf("A media sera %.2f\n", media);
	
	while{
		printf("Quer fazer outra vez?\nDigite s(sim) ou n(não)\n");
	    scanf(" %c",&y);
	}
	system("pause");
}
