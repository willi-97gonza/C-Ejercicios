#include <stdio.h>

int main() {
    char letra;

    // Pedimos al usuario que ingrese una letra minúscula
    printf("Ingresa una letra minuscula: ");
    scanf(" %c", &letra); // El espacio antes de %c evita problemas con saltos de línea

    // Verificamos si la letra está en el rango de minúsculas (a-z)
    if (letra >= 'a' && letra <= 'z') {
        // Convertimos la letra sumando la diferencia entre mayúsculas y minúsculas
        char mayuscula = letra - ('a' - 'A'); 
        printf("La letra mayuscula es: %c\n", mayuscula);
    } else {
        // Si no es minúscula, avisamos al usuario
        printf("'%c' no es una letra minuscula.\n", letra);
    }

    return 0;
}
