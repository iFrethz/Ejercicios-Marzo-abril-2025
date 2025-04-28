#include <stdio.h>
#include <string.h>

struct empleado{
    int id;
    char nombre;
    float sueldo;
};

int main() {
    int n, i;
    struct empleado empleados[100];
    struct empleado mayor, menor;
    
    printf("Ingrese la cantidad de trabajadores: ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        printf("\nEmpleado %d°\n", i + 1);
        printf("ID: ");
        scanf("%d", &empleados[i].id);
        printf("Nombre: ");
        scanf("%s", &empleados[i].nombre);
        printf("Sueldo: ");
        scanf("%f", &empleados[i].sueldo);
    }
    
    mayor = empleados[0];
    menor = empleados[0];
    
    for (i = 0; i < n; i++) {
        if (empleados[i].sueldo < mayor.sueldo) {
            mayor = empleados[i];
        }
        if (empleados[i].sueldo < menor.sueldo) {
            menor = empleados[i];
        }
    }
    printf("Empleado con mayor sueldo\n");
    printf("ID: %d, Nombre: %s, Sueldo: %.2f\n", mayor.id, mayor.nombre, mayor.sueldo);
}