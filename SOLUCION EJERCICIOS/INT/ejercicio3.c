#include <stdio.h>

int main() {
    int numero;
    unsigned long long factorial = 1; // Se usa este tipo para soportar números grandes

    // Pedimos al usuario que ingrese un número entero positivo
    printf("Ingresa un numero entero positivo: ");
    scanf("%d", &numero);

    // Verificamos que el número sea positivo
    if (numero < 0) {
        printf("El factorial no esta definido para numeros negativos.\n");
    } else {
        // Calculamos el factorial con un ciclo for
        for (int i = 1; i <= numero; i++) {
            factorial *= i; // Multiplicamos el acumulador por el valor actual de i
        }

        // Mostramos el resultado
        printf("El factorial de %d es: %llu\n", numero, factorial);
    }

    return 0;
}
