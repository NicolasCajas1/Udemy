#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Desarrollar un programa que pida por teclado una cadena y un caracter
y devuelva si dicho caracter se encuentra en la cadena y, si es así,
la posición de la primera aparición del mismo. */

int main() {
    char cadena[50];
    char caracter;

    printf("Introduce una cadena: ");
    fgets(cadena, sizeof(cadena), stdin);
    printf("Introduce un caracter: ");
    scanf(" %c", &caracter);

    int i = 0;
    int pos = -1;
    while (cadena[i] != '\0' && pos == -1) {
        if (cadena[i] == caracter) {
            pos = i;
        }
        i = i + 1;
    }

    if (pos != -1) {
        printf("El caracter '%c' se encuentra en la cadena '%s' en la posición %d\n", caracter, cadena, pos);
    } else {
        printf("El caracter '%c' no se encuentra en la cadena '%s'\n", caracter, cadena);
    }

    return 0;
}
