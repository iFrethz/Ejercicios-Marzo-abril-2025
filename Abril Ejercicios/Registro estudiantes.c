#include <stdio.h>

struct estudiante {
    char nombre[100], rut[13];
    float nota;
};

struct estudiante e[100];

int main() {
    int cantidad, n;
    float general;
    
    printf("Ingrese la cantidad de estudiantes: ");
    scanf("%d", &cantidad);
    
    if (cantidad == 0){
        printf("La cantida de estudiantes debe ser mayor a 0");
        return 1;
    }
    
    for (int i = 0 ; i < cantidad ; i++) {
        printf("\nIngresesando el %d° alumno\n", i + 1);
        printf("---------------------------\n");
        printf("Ingrese el RUT: ");
        scanf("%s", e[i].rut);
        printf("Ingrese el Nombre Completo: ");
        scanf("%s", e[i].nombre);
        printf("Ingrese la nota: ");
        scanf("%f", &e[i].nota);
    }
    
    printf("\n.....................................\n");
    
    for (n = 0 ; n < cantidad ; n++){
        printf("\nAlumno %d°\n", n + 1);
        printf("Rut: %s - ", e[n].rut);
        printf("Nombre: %s - ", e[n].nombre);
        printf("Nota: %f", e[n].nota);
        
        general += e[n].nota;
    }
    
    printf("\nPromedio General: %f", general);
}
