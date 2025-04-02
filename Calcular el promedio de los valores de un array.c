#include <stdio.h>

float Promedio(int *array, int tamaño) {
    int suma = 0;

    for (int i = 0; i < tamaño; i++) {
        suma += array[i];
    }

    return (float)suma / tamaño;
}

int main() {
    int tamaño;

    printf("Ingrese el tamaño del array: ");
    scanf("%d", &tamaño);

    int numeros[tamaño];

    printf("Ingrese %d valores:\n", tamaño);
    for (int i = 0; i < tamaño; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    float promedio = Promedio(numeros, tamaño);
    printf("El promedio es: %.2f\n", promedio);

    return 0;
}
