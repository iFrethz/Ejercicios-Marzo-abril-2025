#include <stdio.h>

int main() {
    int num;

    printf("Ingrese un número: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("El número %d es positivo.\n", num);
    } else if (num < 0) {
        printf("El número %d es negativo.\n", num);
    } else {
        printf("El número %d es cero.\n", num);
    }
}