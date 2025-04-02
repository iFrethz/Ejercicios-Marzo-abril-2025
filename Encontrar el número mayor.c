#include <stdio.h>

int NumeroMayor(int *array, int tamaño) {
    int mayor = array[0];

    for (int i = 1; i < tamaño; i++) {
        if (array[i] > mayor) {
            mayor = array[i];
        }
    }
    return mayor;
}

int main() {
    int numeros[] = {3, 5, 7, 2, 8, 1, 4};
    int tamaño = sizeof(numeros) / sizeof(numeros[0]);

    int mayor = NumeroMayor(numeros, tamaño);

    printf("El número mayor es: %d\n", mayor);

    return 0;
}
