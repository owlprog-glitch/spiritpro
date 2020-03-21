#include<math.h>
#include<stdio.h>

int potencia(int a)

	{
		int resultado;
		resultado=pow(a,2);
		return resultado;
	}

int main()
{
	int x, z;
	printf("\nDigite o valor de x:");
	scanf("%i", &x);
	
	z=potencia(x);
	printf("%i", &z);
	return 0;	
}
