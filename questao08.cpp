#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float altura, peso;
	
	printf("Informe sua altura: ");
	scanf("%f", &altura);
	
	printf("Informe seu peso: ");
	scanf("%f", &peso);
	
	if (altura < 1.20) {
		if (peso < 60) {
			printf("Classifica��o A \n");
		} else if (peso >= 60 && peso <= 90) {
			printf("Classifica��o D \n");
		} else if (peso > 90) {
			printf("Classifica��o G \n");
		}
	} if (altura >= 1.20 && altura <= 1.70) {
		if(peso < 60) {
			printf("Classifica��o B \n");
		} else if (peso >= 60 && peso <= 90) {
			printf("Classifica��o E \n");
		} else if (peso > 90) {
			printf("Classifica��o H \n");
		}
	} if (altura > 1.70) {
		if (peso < 60) {
			printf("Classifica��o C \n");
		} else if (peso >= 60 && peso <= 90) {
			printf("Classifica��o F \n");
		} else if (peso > 90) {
			printf("Classifica��o I \n");
		}
	}
	return 0;
}
