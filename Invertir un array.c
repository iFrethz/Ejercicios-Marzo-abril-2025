#include <stdio.h>

void invertir(int *array, int tamaño) {
    int temp;

    for (int i = 0; i < tamaño / 2; i++) {
        temp = array[i];
        array[i] = array[tamaño - 1 - i];
        array[tamaño - 1 - i] = temp;
    }
}

int main() {
    int numeros[] = {1, 2, 3, 4, 5};
    int tamaño = sizeof(numeros) / sizeof(numeros[0]); // Calcular el tamaño del array

    printf("Array original: ");
    for (int i = 0; i < tamaño; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    invertir(numeros, tamaño);

    printf("Array invertido: ");
    for (int i = 0; i < tamaño; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
