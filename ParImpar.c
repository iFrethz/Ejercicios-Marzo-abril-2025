#include <stdio.h>

int main() {
    int num;

    printf("Ingrese el número: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("El numero %d es PAR", num);
    } else {
        printf("El numero %d es IMPAR", num);
    }
    
}