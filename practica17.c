#include <stdio.h>
#include <stdlib.h>
/*Crear un vector de 5 numeros_ reales
introducidos por teclado. A_ continuacion,
declarar un puntero al vector y calcular la media
de sus elementos empleando dicho puntero.*/
int main()
{
    float vector[5];

    for (int i = 0; i < 5; i++) {
        printf("Introduce un numero real: ");
        scanf("%f", &vector[i]);
    }

    float *puntero = &vector[0];
    float media = 0;

    for (int i = 0; i < 5; i++) {
        media = media + *(puntero + i); // Corregir el �ndice aqu�, usar i en lugar de 1
    }

    media = media / 5;
    printf("La media de los valores del vector es %.2f\n", media);
}
