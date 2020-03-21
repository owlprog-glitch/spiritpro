#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j, k;

	printf("\n%p", &i);
	printf("\n%p", &j);
	printf("\n%p", &k);
	
	return 0;
}	

/*Interpretação*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i=5, j=5, k=5;
	int *x=&i;
	int *y=&j;
	int *z=&k;
	
	printf("\nvalor de x=%d", i);
	printf("\nvalor de y=%d", j);
	printf("\nvalor de z=%d", k);
	printf("\nvalor de i acessado pelo ponteiro é=%d", *x);
	printf("\nvalor de j acessado pelo ponteiro é=%d", *y);
	printf("\nvalor de k acessado pelo ponteiro é=%d", *z);
	printf("\nValor de i=%x", x);
	printf("\nValor de j=%y", y);
	printf("\nValor de k=%z", z);
	
	return 0;
}	
