#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3, media;
	
	printf("Informe a primeira nota: ");
	scanf("%f", &n1);
	
	printf("Informe a segunda nota: ");
	scanf("%f", &n2);
	
	printf("Informe a terceira nota: ");
	scanf("%f", &n3);
	
	media = (n1 + n2 + n3) / 3;
	
	if (media >= 7) {
		printf("Situação: Aprovado \n");
	} else if (media >= 5 && media < 7) {
		printf("Situação: Recuperação \n");
	} else {
		printf("Situação: Reprovado \n");
	}
	
	return 0;
}
