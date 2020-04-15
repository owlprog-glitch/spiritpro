#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct lista
{
	int valor;
	struct lista*proximo;
};


struct lista*insere_inicio(struct lista*n,int x)
{
	struct lista*novo;
	if(n==NULL)
	{
		
		n=(struct lista*)malloc(sizeof(struct lista));
		n->valor=x;
		n->proximo=NULL;
		return n;
	}
	else
	{
		novo=(struct lista*)malloc(sizeof(struct lista));
		novo->valor=x;
		n->proximo=n;
		return novo;
	}
}


main()
{
	struct lista*inicio=NULL;
	int n;
		if(inicio==NULL)
		{
			printf(" CRIANDO LISTA!!! \n");
			inicio=(struct lista*)malloc(sizeof(struct lista));
			printf(" LISTA CRIADA!!!");
			if(inicio!=NULL)
			{	
				printf("\n digite o n�mero:");
				scanf("%d",&n);
				inicio->valor=n;
				inicio->proximo=NULL; 
			}
			printf(" O VALOR DA VARI�VEL DO PRIMEIRO N� �: %d \n",inicio->valor);
				
		}
		system("pause");	
		
}
