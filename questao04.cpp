#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2;
	
	printf("Informe o primeiro n�mero: ");
	scanf("%d", &num1);
	
	printf("Informe o segundo n�mero: ");
	scanf("%d", &num2);
	
	if (num1 % 2 == 0 && num2 % 2 == 0) {
		printf("Ambos s�o pares \n");
	} else if (num1 % 2 != 0 && num2 % 2 != 0) {
		printf("Ambos s�o �mpares \n");
	} else {
		printf("Um � par e o outro � impar \n");
	}
	
	return 0;
}
