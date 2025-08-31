#include <stdio.h>

int main() {
    double numero1, numero2, suma;

    // Pedimos al usuario que ingrese el primer número
    printf("Ingresa el primer numero: ");
    scanf("%lf", &numero1); // %lf se usa para leer double

    // Pedimos al usuario que ingrese el segundo número
    printf("Ingresa el segundo numero: ");
    scanf("%lf", &numero2);

    // Sumamos los dos números
    suma = numero1 + numero2;

    // Mostramos el resultado
    printf("La suma de %.15lf y %.15lf es: %.15lf\n", numero1, numero2, suma);

    return 0;
}
