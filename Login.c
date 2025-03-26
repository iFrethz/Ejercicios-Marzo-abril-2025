#include <stdio.h>
#include <string.h>

#define USERNAME "admin"
#define PASSWORD "ipchile2025"
#define intentosmax 3

int main()
{
    char user[50], pass[50];
    int intento = 0, exito = 0;

    while (intentos < intentosmax)
    {
        printf("Ingrese el usuario: ");
        scanf("%s", user);

        printf("Ingrese la contraseña: ");
        scanf("%s", pass);

        if (strcmp(user, USERNAME) == 0 && strcmp(pass, PASSWORD) == 0)
        {
            exito = 1;
            break;
        }
        else
        {
            printf("El usuario o contraseña es incorrecto.\n");
            intentos++
        }
    }

    if (exito)
    {
        printf("Iniciaste sesión exitosamente.\n");
    }
    else
    {
        printf("Se bloqueo el acceso a la cuenta.\n")
    }
}