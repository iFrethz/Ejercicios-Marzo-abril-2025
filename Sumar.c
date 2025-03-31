#include <stdio.h>

int sumar(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, resultado;

    printf("Ingrese el primer número: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);
    
    resultado = sumar(num1, num2);
    printf("La suma de %d y %d es: %d", num1, num2, resultado);
}