#include<stdio.h>
#include<stdlib.h>
main()
{
	int x;
	float nota, media=0;
	for(x=0;x<3;x++)
	{
		printf("Entre com sua nota: ");
		scanf("%f", &nota);
		media=media+nota;
	}
	media=media/3;
	printf("A media sera %.2f\n", media);
}
