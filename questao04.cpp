#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2;
	
	printf("Informe o primeiro número: ");
	scanf("%d", &num1);
	
	printf("Informe o segundo número: ");
	scanf("%d", &num2);
	
	if (num1 % 2 == 0 && num2 % 2 == 0) {
		printf("Ambos são pares \n");
	} else if (num1 % 2 != 0 && num2 % 2 != 0) {
		printf("Ambos são ímpares \n");
	} else {
		printf("Um é par e o outro é impar \n");
	}
	
	return 0;
}
