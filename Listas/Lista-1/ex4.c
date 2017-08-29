#include <stdio.h>
#include <stdio_ext.h>


void main(){

	float preco;
	int quant;

	printf("Digite o preço :");
	scanf("%f",preco);
	__fpurge(stdin);
	printf("Digite a quantidade :");
	scanf("%d",quant);



	printf("Produto | Preco unitario | Quantidade | Preco Total \n");
	printf("Banana  |  | Quantidade | Preco Total \n");
	printf("Uva     | Preco unitario | Quantidade | Preco Total \n");

}