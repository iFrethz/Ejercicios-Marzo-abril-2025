#include <stdio.h>

int main() {
    int num1;

    printf("Ingrese el número: ");
    scanf("%d", &num1);

    for (int i = 0; i < 13; i++) {
        printf("%d x %d = %d\n", num1, i, num1 * i);
    }
    
}