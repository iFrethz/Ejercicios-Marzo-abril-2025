#include <stdio.h>

int main() {
    int num1, num2, num3, mayor;

    printf("Ingrese el primer número: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    printf("Ingrese el tercer número: ");
    scanf("%d", &num3);

    mayor = num1;
    
    if (num2 > mayor) {
        mayor = num2;
    } if (num3 > mayor) {
        mayor = num3;
    }

    printf("El número mayor es: %d\n", mayor);

}