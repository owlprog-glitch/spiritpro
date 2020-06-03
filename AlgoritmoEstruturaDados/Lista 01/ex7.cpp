#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int numero, cont=0;

int main(){
	printf("tabuada:\n");
	scanf("%d", &numero);
	
	for(cont=0;cont<=6;cont++){
		printf("%d", numero);
	}
	
	system("pause");
	return 0;
}
