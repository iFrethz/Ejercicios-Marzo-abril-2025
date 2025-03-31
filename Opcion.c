#include <stdio.h>

int main() {
    char letra;

    printf("Ingrese una letra (A, B, C): ");
    scanf("%c", &letra);
    
    switch (letra) {
        case 'A':
        case 'a':
            printf("Primera opción.");
            break;
        case 'B':
        case 'b':
            printf("Segunda opción.");
            break;
        case 'C':
        case 'c':
            printf("Tercera opción.");
            break;
        default:
        printf("Opción no válida.");
    }
}