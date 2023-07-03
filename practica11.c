#include <stdio.h>
#include <stdlib.h>
/* Cargar por teclado y almacenar en un vector el peso de 5 personas.
Obtener el promedio de los mismos. Contar cuantas personas pesan más
que el promedio y cuantas pesan menos. */

int main() {
    float pesos[5];
    float suma = 0;

    for (int i = 0; i < 5; i++) {
        printf("Introduce un peso para almacenar: ");
        scanf("%f", &pesos[i]);
        suma = suma + pesos[i];
    }

    float promedio = suma / 5;
    int cont_mayor_igual = 0;
    int cont_menor = 0;

    for (int i = 0; i < 5; i++) {
        if (pesos[i] >= promedio) {
            cont_mayor_igual++;
        }
        else {
            cont_menor++;
        }
    }

    printf("N° peso mayor o igual que el promedio: %d, N°pesos menores que el promedio: %d",cont_mayor_igual, cont_menor);
    return 0;
}
