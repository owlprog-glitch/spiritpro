#include<stdio.h>
#include<stdlib.h>
main()
{
    int i;
    int n=2;
    int soma=0;

    for(i=1;i<=50;i++){
    soma+=n;
    n+=2;
    }
    printf("Soma dos primeiros 50 numeros pares: $i\n", soma);
    return 0;
}
