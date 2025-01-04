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
        printf("Os valores formam um tri�ngulo.\n");
        
        if (A == B && B == C) {
            printf("� um tri�ngulo equil�tero.\n");
        } else if (A == B || A == C || B == C) {
            printf("� um tri�ngulo is�sceles.\n");
        } else {
            printf("� um tri�ngulo escaleno.\n");
        }
    } else {
        printf("Os valores n�o formam um tri�ngulo.\n");
    }
    
    return 0;
}
