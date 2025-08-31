#include <stdio.h>

int main() {
    double numero;

    // Pedimos al usuario que ingrese un número
    printf("Ingresa un numero: ");
    scanf("%lf", &numero); // %lf se usa para leer double

    // Verificamos si el número es positivo, negativo o cero
    if (numero > 0) {
        printf("El numero %.2lf es positivo.\n", numero);
    } 
    else if (numero < 0) {
        printf("El numero %.2lf es negativo.\n", numero);
    } 
    else {
        printf("El numero es cero.\n");
    }

    return 0;
}
