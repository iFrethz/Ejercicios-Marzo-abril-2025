#include <stdio.h>

int main()
{
    int nums, suma = 0;

    printf("Ingrese un número: ");
    scanf("%d", &nums);

    if (nums < 1) {
        printf("Porfavor ingrese un número.\n");
    }

    for (int i = 1; i < nums; i++) {
        suma += i;
    }

    printf("La suma de los primero/s %d número/s es: %d\n", nums, suma);
}