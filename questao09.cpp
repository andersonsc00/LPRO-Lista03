#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float nota;
	int faltas;
	
	printf("Informe a nota do aluno: ");
	scanf("%f", &nota);
	
	printf("Informe o número de faltas do aluno: ");
	scanf("%d", &faltas);
	
	if (nota >= 9.0 && nota <= 10.0) {
		if(faltas < 20) {
			printf("Conceito: A \n");
		} else if (faltas > 20) {
			printf("Conceito: B \n");
		}
	} if (nota >= 7.5 && nota <= 8.9) {
		if(faltas < 20) {
			printf("Conceito: B \n");
		} else if (faltas > 20) {
			printf("Conceito: C \n");
		}
	} if (nota >= 5.0 && nota <= 7.4) {
		if (faltas < 20) {
			printf("Conceito: C \n");
		} else if (faltas > 20) {
			printf("Conceito: D \n");
		}
	} if (nota >= 4.0 && nota <= 4.9) {
		if (faltas < 20) {
			printf("Conceito: D \n");
		} else  if (faltas > 20) {
			printf("Conceito: E \n");
		}
	} if (nota >= 0.0 && nota <= 3.9) {
		if (faltas < 20) {
			printf("Conceito: E \n");
		} else if (faltas > 20) {
			printf("Conceito: E \n");
		}
	}
	
	return 0;
}

