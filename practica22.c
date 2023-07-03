#include <stdio.h>
#include <stdlib.h>

/*‘Se desea realizar un programa que permita controlar la enirada de los asistentes a un museo.
Para ello e! programa ira solicitando, por cada grupo de asistentes, informacién de la hora de
‘acceso, el numero de personas que forman el grupo y las edades de cada una de elas. Una
‘vez introducida la informacién, el programa mostraré el precio total de la entrada grupal

La informaci6n de la entrada se almacenaré en una estructura de dalos formada por los
Siguientes miembros:

© Hora de entrada
© Numero de asistentes
© Precio total

‘A su vez, la hora de entrada seré una estructura anidada donde se almacenara la siguiente
informacion:

© Hora
© Minuto*/

struct horae {
    int hora;
    int minuto;
};

struct entrada {
    struct horae hora1;
    int asistencias;
    float precio;
};

int main() {
    struct entrada el;
    char continuar = 's';

    while (continuar == 's') {
        printf("Introduce la hora de llegada (hora minuto): ");
        scanf("%d %d", &el.hora1.hora, &el.hora1.minuto);

        printf("Introduce el n�mero de asistentes: ");
        scanf("%d", &el.asistencias);

        int total = 0;
        for (int i = 0; i < el.asistencias; i++) {
            int edad;
            printf("Introduce la edad del asistente %d: ", (i + 1));
            scanf("%d", &edad);

            if (edad < 6) {
                total += 0;
            } else if (edad >= 6 && edad <= 15) {
                total += 5;
            } else if ((edad >= 16 && edad <= 26) || edad > 65) {
                total += 8;
            } else {
                total += 10;
            }
        }

        if (el.asistencias >= 5) {
            el.precio = total - total * 0.1;
        } else {
            el.precio = total;
        }
        printf("Hora de entrada del grupo: %d\n", el.hora1.hora);
        printf("Minuto de entrada del grupo: %d\n", el.hora1.minuto);
        printf("Precio de las entradas del grupo: %.2f\n", el.precio);

        printf("�Quiere continuar con otro grupo? (s/n): ");
        fflush(stdin); // Limpiar el bufer de entrada antes de leer el siguiente car�cter
        scanf(" %c", &continuar); // Espacio antes del %c para evitar problemas con el b�fer de entrada
        while (continuar == 'n'){
            scanf(" %c", &continuar);
        }

    }

    printf("Hasta la proxima.......\n");

    return 0;
}
