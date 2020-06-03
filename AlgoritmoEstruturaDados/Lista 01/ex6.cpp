#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int raiz;
	int num[3][2];
	
	printf("Digite um numero: ");
	scanf("%i",&num[0][0]);
	printf("Digite um numero: ");
	scanf("%i",&num[0][1]);
	printf("Digite um numero: ");
	scanf("%i",&num[1][0]);
	printf("Digite um numero: ");
	scanf("%i",&num[1][1]);
	
	printf("\nResultado: %i\n",num[0][0]*2);
	printf("Resultado: %i\n",num[0][1]*2);
	printf("Resultado: %i\n",num[1][0]*2);
	printf("Resultado: %i\n",num[1][1]*2);
	system("\npause");
	

	
}
