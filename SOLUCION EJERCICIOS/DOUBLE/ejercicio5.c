#include <stdio.h>
#include <math.h> // Necesario para usar pow()

int main() {
    double base, exponente, resultado;

    // Pedimos la base al usuario
    printf("Ingresa la base: ");
    scanf("%lf", &base);

    // Pedimos el exponente al usuario
    printf("Ingresa el exponente: ");
    scanf("%lf", &exponente);

    // Calculamos la potencia usando la función pow() de la librería math.h
    resultado = pow(base, exponente);

    // Mostramos el resultado
    printf("%.2lf elevado a %.2lf es: %.5lf\n", base, exponente, resultado);

    return 0;
}
