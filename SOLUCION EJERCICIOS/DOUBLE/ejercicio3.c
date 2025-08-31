#include <stdio.h>

int main() {
    double numero, suma = 0.0;
    int cantidad = 5;

    // Pedimos al usuario que ingrese 5 números
    for (int i = 1; i <= cantidad; i++) {
        printf("Ingresa el numero %d: ", i);
        scanf("%lf", &numero); // Leemos cada número de tipo double
        suma += numero; // Acumulamos la suma
    }

    // Calculamos el promedio
    double promedio = suma / cantidad;

    // Mostramos el resultado
    printf("El promedio de los 5 numeros es: %.2lf\n", promedio);

    return 0;
}
