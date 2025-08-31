#include <stdio.h>

int main() {
    int numero1, numero2, suma;

    // Pedimos al usuario que ingrese el primer número entero
    printf("Ingresa el primer numero entero: ");
    scanf("%d", &numero1); // %d se usa para enteros

    // Pedimos al usuario que ingrese el segundo número entero
    printf("Ingresa el segundo numero entero: ");
    scanf("%d", &numero2);

    // Calculamos la suma de los dos números
    suma = numero1 + numero2;

    // Mostramos el resultado
    printf("La suma de %d y %d es: %d\n", numero1, numero2, suma);

    return 0;
}
