#include<stdio.h>
#include<stdlib.h>

main()
{
	float n1, n2, n3, n4, n5, media;
	
	printf("Digite a primeiro numero: ");
	scanf("%f", &n1);
	printf("Digite a segundo numero: ");
	scanf("%f", &n2);
	printf("Digite a terceiro numero: ");
	scanf("%f", &n3);
	printf("Digite a quarto numero: ");
	scanf("%f", &n4);
	printf("Digite a quinto numero: ");
	scanf("%f", &n5);
	
	media=(n1+n2+n3+n4+n5)/5;
	
	printf("\nMedia: %f %f\n", n1, n2, n3, n4, n5);
	printf("A media: %f\n", media);
	
	system("pause");
}
