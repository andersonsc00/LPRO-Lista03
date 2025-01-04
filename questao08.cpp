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
			printf("Classificação A \n");
		} else if (peso >= 60 && peso <= 90) {
			printf("Classificação D \n");
		} else if (peso > 90) {
			printf("Classificação G \n");
		}
	} if (altura >= 1.20 && altura <= 1.70) {
		if(peso < 60) {
			printf("Classificação B \n");
		} else if (peso >= 60 && peso <= 90) {
			printf("Classificação E \n");
		} else if (peso > 90) {
			printf("Classificação H \n");
		}
	} if (altura > 1.70) {
		if (peso < 60) {
			printf("Classificação C \n");
		} else if (peso >= 60 && peso <= 90) {
			printf("Classificação F \n");
		} else if (peso > 90) {
			printf("Classificação I \n");
		}
	}
	return 0;
}
