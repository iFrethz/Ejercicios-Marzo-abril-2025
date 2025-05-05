#include <stdio.h>

struct producto{
    char nombre[50];
    int precio, cantidad;
};

void agregar() {
    struct producto p[100];
    char seguir;
    int contador = 1;
    
    if (contador > 100) {
        printf("No puedes exceder el limite de 100 productos.");
    }
    
    do {
        printf("\nAgregar el %d° producto\n", contador);
        printf("---------------------\n");
        printf("Nombre: ");
        scanf("%s", p[contador].nombre);
        printf("Precio: ");
        scanf("%d", &p[contador].precio);
        printf("Cantidad: ");
        scanf("%d", &p[contador].cantidad);
        printf("---------------------\n");
        
        contador++;
        
        printf("Desea seguir agregando productos (s/n): ");
        scanf(" %c", &seguir);
    } while (seguir == 's' || seguir == 'S');
}

int main() {
    int select;
    
    do {
    printf("\nGestión de inventario\n");
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
            printf("Select 2");
            break;
        case 3:
            printf("\nSaliendo del programa...");
            break;
        default:
            printf("\nOpción no valida... Espere 3 segundos\n");
            sleep(3);
            break;
    }
    } while (select != 3);
}
