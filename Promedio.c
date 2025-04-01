#include <stdio.h>

int main() {
    int nota[3];

    for (int i = 0; i < 3; i++) {
        printf("Ingrese la nota %d : ", i + 1);
        scanf("%d", &nota[i]);
    }
    
    int notafinal = (nota[0] + nota[1] + nota[2]) / 3;
    printf("Promedio Final: %d", notafinal);

}
