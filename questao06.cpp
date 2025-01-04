#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int idade, tServico;
	
	printf("Informe a idade: ");
	scanf("%d", &idade);
	
	printf("Informe o tempo de serviço: ");
	scanf("%d", &tServico);
	
	if (idade >= 65) {
		printf("O trabalhador pode se aposentar \n");
	} else if (tServico >= 30) {
		printf("O trabalhador pode se aposentar \n");
	} else if (idade >= 60 && tServico >= 25) {
		printf("O trabalhador pode se aposentar \n");
	} else {
		printf("O trabalhador não pode se aposentar \n");
	}
	
	return 0;
}
