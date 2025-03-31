#include <stdio.h>

int main() {
    int num1, num2;

    printf("Ingrese el primer número: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    printf("Resultados\n");
    printf("Suma: %d\n", num1 + num2);
    printf("Resta: %d\n", num1 - num2);
    printf("Multiplicacion: %d\n", num1 * num2);

    if (num2 != 0) {
        printf("Division: %d\n", num1 / num2);
    } else {
        printf("No se puede dividir por 0.\n");
    }
}