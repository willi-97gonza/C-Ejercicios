#include <stdio.h>
#include <string.h> // Para usar strlen()

int main() {
    char palabra[100]; // Espacio para la palabra (hasta 99 caracteres)
    char letra;
    int contador = 0;

    // Pedimos al usuario que escriba una palabra
    printf("Ingresa una palabra: ");
    scanf("%99s", palabra); // Limita la entrada a 99 caracteres para evitar errores

    // Pedimos la letra que queremos contar
    printf("Ingresa la letra que quieres contar: ");
    scanf(" %c", &letra); // El espacio antes de %c evita problemas con saltos de línea

    // Recorremos la palabra para contar cuántas veces aparece la letra
    for (int i = 0; i < strlen(palabra); i++) {
        if (palabra[i] == letra) {
            contador++;
        }
    }

    // Mostramos el resultado
    printf("La letra '%c' aparece %d veces en la palabra \"%s\".\n", letra, contador, palabra);

    return 0;
}
