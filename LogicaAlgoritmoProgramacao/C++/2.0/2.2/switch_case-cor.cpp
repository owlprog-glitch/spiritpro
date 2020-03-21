#include<stdio.h>
#include<stdlib.h>
main()
{
	int opcao;
	printf("1- Fundo preto e letra azul\n");
	printf("2 - Fundo verde e letra cinza\n");
	scanf("%d", &opcao);
	printf("Algoritmos\n");
	switch(opcao)
	{
		case 1:
			system("color 0F");
			printf("1- Fundo preto e letra azul\n");
			break;
	
		case 2:
		system("color 23");
		printf("2 - Fundo verde e letra cinza\n");
		break;
	}
}
