#include <stdio.h>
#include <stdlib.h>
/* Desarrolla un programa que pida un número de alumnos, deberá pedir las notas de esos alumnos
y mostrar por pantalla el número de aprobados y suspensos. */

int main() {
    int n, contador_aprobados = 0, contador_suspensos = 0;
    float nota;

    printf("Introduce el número de alumnos: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Introduce la nota del alumno %d: ", i);
        scanf("%f", &nota);

        if (nota >= 5) {
            contador_aprobados++;
        }
        else {
            contador_suspensos++;
        }
    }

    printf("El número de aprobados es: %d y el número de alumnos suspensos es: %d\n", contador_aprobados, contador_suspensos);

    return 0;
}
