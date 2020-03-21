#include<math.h>
#include<stdlib.h>
#include<stdio.h>
	
	int multiplica (int a, int b)
	{
		int resultado;
		resultado=a*b;
		return resultado;
	}
int main()
{
	int x,y,z;
	printf("\nDigite o valor de x:");
	scanf("%i", &x);
	printf("\nDigite o valor de y:");
	scanf("%i", &y);
	
	z=multiplica(x,y);
	printf("%i", &z);
	return 0;	
}
