#include <stdio.h>

int main() {
    int numero;

    // Pedimos al usuario que ingrese un número entero
    printf("Ingresa un numero entero: ");
    scanf("%d", &numero); // %d se usa para enteros

    // Verificamos si es par o impar usando el operador módulo (%)
    if (numero % 2 == 0) {
        printf("El numero %d es par.\n", numero);
    } else {
        printf("El numero %d es impar.\n", numero);
    }

    return 0;
}
