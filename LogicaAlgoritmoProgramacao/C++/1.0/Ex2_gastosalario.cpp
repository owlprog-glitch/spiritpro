#include<stdio.h>
#include<stdlib.h>

main()
{
	float salario_mensal, agua, luz, compra, total_gastos, restante_salario;

	printf("Digite o valor do seu salario mensal: ");
	scanf("%f", &salario_mensal);
	printf("Digite o valor da conta de agua: ");
	scanf("%f", &agua);
	printf("Digite o valor da conta de luz:");
	scanf("%f", &luz);
	printf("Digite o valor das compras:");
	scanf("%f", &compra);
	total_gastos=(salario_mensal-agua+luz+compra);
	printf("\nTotal: %f %f\n", salario_mensal,agua, luz, compra, total_gastos);
	printf("Restante foi: %f\n", restante_salario);
	system("pause");
}
