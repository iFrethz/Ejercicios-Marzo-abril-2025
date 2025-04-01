#include <stdio.h>
#define PI 3.14

int main() {
    float area, radio;

    printf("Ingrese el radio: ");
    scanf("%f", &radio);

    area = PI * radio * radio;

    printf("El area del circulo es: %.2f", area);

}