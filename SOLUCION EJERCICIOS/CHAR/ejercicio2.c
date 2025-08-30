#include <stdio.h>

int main() {
    char caracter;

    // Pedimos al usuario que ingrese un carácter
    printf("Ingresa un caracter: ");
    scanf(" %c", &caracter); // El espacio antes de %c evita errores con saltos de línea

    // Verificamos si el carácter es una vocal (consideramos minúsculas y mayúsculas)
    if (caracter == 'a' || caracter == 'e' || caracter == 'i' || 
        caracter == 'o' || caracter == 'u' || 
        caracter == 'A' || caracter == 'E' || caracter == 'I' || 
        caracter == 'O' || caracter == 'U') {
        printf("El caracter '%c' es una vocal.\n", caracter);
    } 
    else if ((caracter >= 'a' && caracter <= 'z') || (caracter >= 'A' && caracter <= 'Z')) {
        // Si no es vocal pero es una letra del alfabeto, entonces es consonante
        printf("El caracter '%c' es una consonante.\n", caracter);
    } 
    else {
        // Si no es letra, no es ni vocal ni consonante
        printf("El caracter '%c' no es una letra.\n", caracter);
    }

    return 0;
}
