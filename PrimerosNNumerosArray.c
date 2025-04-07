#include <stdio.h>

int main() {
    int nums, suma = 0;
    int arr[nums];

    printf("Ingrese un número: ");
    scanf("%d", &nums);

    if (nums < 1) {
        printf("Porfavor ingrese un número.\n");
        return 1;
    }

    for (int i = 1; i < nums; i++) {
        arr[i-1] = i;
        suma += arr[i-1];
    }

    printf("La suma de los primero/s %d número/s es: %d\n", nums, suma);
}