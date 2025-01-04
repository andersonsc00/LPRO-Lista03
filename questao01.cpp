#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float valor, valorFinal, desconto, acrescimo;
	int pagamento;
	
	printf("Informe o valor do produto: ");
	scanf("%f", &valor);
	
	printf("------------------- \n");
	
	printf("1 - À vista (10%% de desconto) \n");
	printf("2 - Parcelado em 2x (sem desconto)\n");
	printf("3 - Parcelado em 3x (5%% de acréscimo) \n");
	
	printf("Informe a forma de pagamento: ");
	scanf("%d", &pagamento);
	
	if (pagamento == 1) {
		desconto = valor * 0.10;
		valorFinal = valor - desconto;
		printf("Valor a pagar: R$%.2f", valorFinal);
	} else if (pagamento == 2) {
		printf("Valor a pagar: R$%.2f", valor);
	} else if (pagamento == 3) {
		acrescimo = valor * 0.5;
		valorFinal = valor + acrescimo;
		printf("Valor a pagar: R$%.2f", valorFinal);
	} else {
		printf("Entrada inválida.");
	}
	return 0;
	
}
