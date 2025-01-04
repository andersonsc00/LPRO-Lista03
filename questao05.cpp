#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
    float A, B, C;
    
    printf("Informe o valor do lado A: ");
    scanf("%f", &A);
    printf("Informe o valor do lado B: ");
    scanf("%f", &B);
    printf("Informe o valor do lado C: ");
    scanf("%f", &C);
    
    if (A < B + C && B < A + C && C < A + B) {
        printf("Os valores formam um triângulo.\n");
        
        if (A == B && B == C) {
            printf("É um triângulo equilátero.\n");
        } else if (A == B || A == C || B == C) {
            printf("É um triângulo isósceles.\n");
        } else {
            printf("É um triângulo escaleno.\n");
        }
    } else {
        printf("Os valores não formam um triângulo.\n");
    }
    
    return 0;
}
