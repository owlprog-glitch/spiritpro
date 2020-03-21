#include<stdio.h>
#include<stdlib.h>
main()
{
	int cod[9], soma=0, cod1=0,cod2=0;

	cod[0]=20;
	cod[1]=10;
	cod[2]=15;
	cod[3]=19;
	cod[4]=39;
	cod[5]=80;
	cod[6]=7;
	cod[7]=42;
	cod[8]=30;
	cod[9]=12;

	printf("cod[0] = %i\n", cod[0]);
	printf("cod[1] = %i\n", cod[1]);
	printf("cod[2] = %i\n", cod[2]);
	printf("cod[3] = %i\n", cod[3]);
	printf("cod[4] = %i\n", cod[4]);
	printf("cod[5] = %i\n", cod[5]);
	printf("cod[6] = %i\n", cod[6]);
	printf("cod[7] = %i\n", cod[7]);
	printf("cod[8] = %i\n", cod[8]);
	printf("cod[9] = %i\n", cod[9]);

	printf("\nDigite o codigo: ");
	scanf("%i", &cod1);
	printf("\nDigite o codigo: ");
	scanf("%i", &cod2);

	soma=cod[cod1]+cod[cod2];
	printf("Soma: %i", soma);

}