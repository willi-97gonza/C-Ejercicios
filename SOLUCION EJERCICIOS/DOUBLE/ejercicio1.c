#include <stdio.h>

int main() {
    int n = 1000;        // Número de términos a usar
    double pi = 0.0;     // Variable para almacenar la suma
    double signo = 1.0;  // El signo empieza en positivo

    // La serie de Leibniz: pi/4 = 1 - 1/3 + 1/5 - 1/7 + 1/9 ...
    for (int i = 0; i < n; i++) {
        pi += signo * (1.0 / (2 * i + 1)); // Suma o resta según el signo
        signo *= -1; // Cambia el signo en cada término
    }

    pi *= 4; // Multiplicamos por 4 porque la serie calcula pi/4

    printf("El valor aproximado de pi usando %d terminos es: %.15f\n", n, pi);

    return 0;
}
