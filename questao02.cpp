#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float peso, altura, imc;
	
	printf("Informe seu peso: ");
	scanf("%f", &peso);
	
	printf("Informe sua altura: ");
	scanf("%f", &altura);
	
	imc = peso / (altura * altura);
	
	if (imc < 18.5) {
		printf("Abaixo do peso \n");
	} else if (imc >= 18.5 && imc <= 24.9) {
		printf("Peso normal \n");
	} else if (imc >= 25 && imc <= 29.9) {
		printf("Sobrepeso \n");
	} else {
		printf("Obesidade");
	}
	
	return 0;
}
