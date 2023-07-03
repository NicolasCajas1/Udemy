#include <stdio.h>
#include <stdlib.h>
/* Desarrolla un programa que solicite constantemente la carga de un número al usuario.
El programa finalizará cuando el usuario introduzca un 0, momento en el que se debe visualizar
la suma y el promedio de todos los números introducidos. */

int main() {
    int suma = 0, contador = 0, numero = -1;

    while (numero != 0) {
        printf("Introduce un número (0 para finalizar): ");
        scanf("%d", &numero);
        contador++;
        suma += numero;
    }

    float promedio = (float)suma / (contador - 1);
    printf("La suma de todos los números es: %d y el promedio es: %.2f\n", suma, promedio);

    return 0;
}
