#include<stdio.h>
#include<stdlib.h>
main()
{

//Essa  versão é de outro professor

    int idade;
    char sexo, m, f;
    float media=0;
    int ct=1;

    for(ct=1;ct<=12;ct++){
        printf("Idade: ");
		scanf("%i", &idade);
		printf("sexo: ");
		scanf("%c", &sexo);
		printf("Masculino");
		scanf("%c", m);
		printf("Feminino");
		scanf("%c", f);
    }
    media=media;
	printf("Idade media do grupo: %d\n", idade);
	printf("Media das idades: %d\n", media);
}
