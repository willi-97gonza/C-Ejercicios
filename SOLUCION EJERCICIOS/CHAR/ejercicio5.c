#include <stdio.h>

int main() {
    char caracter;

    // Pedimos al usuario que ingrese un carácter
    printf("Ingresa un caracter: ");
    scanf(" %c", &caracter); // El espacio antes de %c evita problemas con saltos de línea

    // Verificamos si el carácter es un dígito numérico (del 0 al 9)
    if (caracter >= '0' && caracter <= '9') {
        printf("El caracter '%c' es un digito numerico.\n", caracter);
    } else {
        printf("El caracter '%c' NO es un digito numerico.\n", caracter);
    }

    return 0;
}
