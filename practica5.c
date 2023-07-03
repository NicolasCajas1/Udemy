#include <stdio.h>
#include <stdlib.h>
//notas del estudiante(pasa o no )
int main() {
    int nota;
    printf("Introduce la nota del alumno:\n");
    scanf("%d", &nota);

    if (nota < 5) {
        printf("Suspenso\n");
    }
    else if (nota == 6) {
        printf("Bien\n");
    }
    else if (nota == 7 || nota == 8) {
        printf("Notable\n");
    } 
    else if (nota == 9 || nota == 10) {
        printf("Sobresaliente\n");
    }
    else {
        printf("Nota introducida no válida\n");
    }

    return 0;
}
