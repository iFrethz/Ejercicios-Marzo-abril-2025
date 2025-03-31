#include <stdio.h>
#include <ctype.h>

int main() {
    char nombre[50];

    printf("Ingrese su nombre: ");
    scanf("%s", nombre);
    
    for (int i = 0; nombre[i] != '\0'; i++) {
        nombre[i] = toupper(nombre[i]);
    }
    
    printf("Hola, %s", nombre);
}
