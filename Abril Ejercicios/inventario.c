#include <stdio.h>

struct producto{
    char nombre[50];
    int precio, cantidad;
};

void agregar() {
    struct producto p;
    char seguir;
    do {
        printf("\nAgregar un producto\n");
        printf("---------------------\n");
        printf("Nombre: ");
        scanf("%s", p.nombre);
        printf("Precio: ");
        scanf("%d", &p.precio);
        printf("Cantidad: ");
        scanf("%d", &p.cantidad);
        printf("---------------------\n");
        printf("Desea seguir agregando productos (s/n): ");
        scanf(" %c", &seguir);
    } while (seguir == 's' || seguir == 'S');
}

int main() {
    struct producto nuevoProducto[50];
    int select;
    printf("Gestión de inventario\n");
    printf("----------------------\n");
    printf("1.- Agregar Productos\n");
    printf("2.- Mostrar Productos\n");
    printf("3.- Salir\n");
    printf("----------------------\n");
    printf("Selecciona una opción: ");
    scanf("%d", &select);
    
    switch (select) {
        case 1:
            agregar();
            break;
        case 2:
            printf("eleccion 2");
            break;
        case 3:
            printf("Saliendo del programa...");
            break;
        default:
            printf("Opción no valida");
            break;
    }
    
    return 0;
}