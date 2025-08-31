#include <stdio.h>

int main() {
    int num1, num2, num3, mayor;

    // Pedimos al usuario que ingrese tres números enteros
    printf("Ingresa el primer numero: ");
    scanf("%d", &num1);

    printf("Ingresa el segundo numero: ");
    scanf("%d", &num2);

    printf("Ingresa el tercer numero: ");
    scanf("%d", &num3);

    // Comparamos los números para encontrar el mayor
    if (num1 >= num2 && num1 >= num3) {
        mayor = num1;
    } 
    else if (num2 >= num1 && num2 >= num3) {
        mayor = num2;
    } 
    else {
        mayor = num3;
    }

    // Mostramos el resultado
    printf("El mayor de los tres numeros es: %d\n", mayor);

    return 0;
}
