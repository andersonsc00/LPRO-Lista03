#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    float num1, num2, num3;

    printf("Informe o primeiro n�mero: ");
    scanf("%f", &num1);
    printf("Informe o segundo n�mero: ");
    scanf("%f", &num2);
    printf("Informe o terceiro n�mero: ");
    scanf("%f", &num3);

    if (num1 >= num2 && num1 >= num3) {
        if (num2 >= num3) {
            printf("Os n�meros em ordem decrescente s�o: %.1f, %.1f, %.1f\n", num1, num2, num3);
        } else {
            printf("Os n�meros em ordem decrescente s�o: %.1f, %.1f, %.1f\n", num1, num3, num2);
        }
    } else if (num2 >= num1 && num2 >= num3) {
        if (num1 >= num3) {
            printf("Os n�meros em ordem decrescente s�o: %.1f, %.1f, %.1f\n", num2, num1, num3);
        } else {
            printf("Os n�meros em ordem decrescente s�o: %.1f, %.1f, %.1f\n", num2, num3, num1);
        }
    } else {
        if (num1 >= num2) {
            printf("Os n�meros em ordem decrescente s�o: %.1f, %.1f, %.1f\n", num3, num1, num2);
        } else {
            printf("Os n�meros em ordem decrescente s�o: %.1f, %.1f, %.1f\n", num3, num2, num1);
        }
    }

    return 0;
}

