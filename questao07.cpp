#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    float num1, num2, num3;

    printf("Informe o primeiro número: ");
    scanf("%f", &num1);
    printf("Informe o segundo número: ");
    scanf("%f", &num2);
    printf("Informe o terceiro número: ");
    scanf("%f", &num3);

    if (num1 >= num2 && num1 >= num3) {
        if (num2 >= num3) {
            printf("Os números em ordem decrescente são: %.1f, %.1f, %.1f\n", num1, num2, num3);
        } else {
            printf("Os números em ordem decrescente são: %.1f, %.1f, %.1f\n", num1, num3, num2);
        }
    } else if (num2 >= num1 && num2 >= num3) {
        if (num1 >= num3) {
            printf("Os números em ordem decrescente são: %.1f, %.1f, %.1f\n", num2, num1, num3);
        } else {
            printf("Os números em ordem decrescente são: %.1f, %.1f, %.1f\n", num2, num3, num1);
        }
    } else {
        if (num1 >= num2) {
            printf("Os números em ordem decrescente são: %.1f, %.1f, %.1f\n", num3, num1, num2);
        } else {
            printf("Os números em ordem decrescente são: %.1f, %.1f, %.1f\n", num3, num2, num1);
        }
    }

    return 0;
}

