#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main() {
    int num1, num2, resultado;
    char operador;

    printf("Ingrese la operacion (num operador num) ");
    scanf("%d %c %d", &num1, &operador, &num2);

    switch (operador) {
    case '+':
        resultado = num1 + num2;
        printf("La suma es: %d\n", resultado);
        break;
    case '-':
        resultado = num1 - num2;
        printf("La resta es: %d\n", resultado);
        break;
    case '/':
        resultado = num1 / num2;
        printf("La división es: %d\n", resultado);
        break;
    case '*':
        resultado = num1 * num2;
        printf("La multiplicación es: %d\n", resultado);
        break;
    default:
        break;
    }

    return 0;
}
